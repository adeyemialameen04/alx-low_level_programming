#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

/**
 * main - Entry point of the program.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line arguments.
 * Return: 0 on success, 98 on failure.
 */
int main(int argc, char *argv[]);
int main(int argc, char *argv[])
{
	int fd;
	Elf64_Ehdr ehdr;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		return (98);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		perror("Error");
		return (98);
	}

	if (read(fd, &ehdr, sizeof(ehdr)) != sizeof(ehdr))
	{
		perror("Error");
		close(fd);
		return (98);
	}

	printf("ELF Header:\n");

	printf("  Magic:   ");
	for (int i = 0; i < EI_NIDENT; i++)
		printf("%02x%c", ehdr.e_ident[i], i + 1 < EI_NIDENT ? ' ' : '\n');

	printf("  Class:                             ");
	switch (ehdr.e_ident[EI_CLASS])
	{
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("<unknown: %x>\n", ehdr.e_ident[EI_CLASS]);
	}

	printf("  Data:                              ");
	switch (ehdr.e_ident[EI_DATA])
	{
	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;
	default:
		printf("<unknown: %x>\n", ehdr.e_ident[EI_DATA]);
	}

	printf("  Version:                           %d (current)\n",
		   ehdr.e_ident[EI_VERSION]);

	printf("  OS/ABI:                            ");
	switch (ehdr.e_ident[EI_OSABI])
	{
	case ELFOSABI_SYSV:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;

	default:
		printf("<unknown: %x>\n", ehdr.e_ident[EI_OSABI]);
	}

	printf("  ABI Version:                       %d\n",
		   ehdr.e_ident[EI_ABIVERSION]);

	printf("  Type:                              ");
	switch (ehdr.e_type)
	{
	case ET_NONE:
		printf("NONE (Unknown type)\n");
		break;
	case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)\n");
		break;

	default:
		printf("<unknown: %x>\n", ehdr.e_type);
	}

	printf("  Entry point address:               %#lx\n",
		   (unsigned long)ehdr.e_entry);

	close(fd);
	return (0);
}
