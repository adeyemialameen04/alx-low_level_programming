#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
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
	Elf64_Ehdr ehdr64;
	Elf32_Ehdr ehdr32;

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

	/*Read the ELF header*/
	if (read(fd, &ehdr64, sizeof(ehdr64)) == sizeof(ehdr64))
	{
		/*Check if the file is a valid ELF binary*/
		if (memcmp(ehdr64.e_ident, ELFMAG, SELFMAG) == 0)
		{
			int i;

			printf("ELF Header:\n");
			printf("  Magic:   ");
			for (i = 0; i < EI_NIDENT; i++)
				printf("%02x%c", ehdr64.e_ident[i], i + 1 < EI_NIDENT ? ' ' : '\n');

			/*Print other ELF header information for 64-bit ELF*/
			printf("  Class:                             ELF64\n");
			printf("  Data:                              2's complement, ");
			printf("little endian\n");
			printf("  Version:                           %d (current)\n",
				   ehdr64.e_ident[EI_VERSION]);

			printf("  OS/ABI:                            ");
			switch (ehdr64.e_ident[EI_OSABI])
			{
			case ELFOSABI_SYSV:
				printf("UNIX - System V\n");
				break;
			case ELFOSABI_NETBSD:
				printf("UNIX - NetBSD\n");
				break;
			case ELFOSABI_SOLARIS:
				printf("UNIX - Solaris\n");
				break;
			default:
				printf("<unknown: %x>\n", ehdr64.e_ident[EI_OSABI]);
			}

			printf("  ABI Version:                       %d\n",
				   ehdr64.e_ident[EI_ABIVERSION]);

			printf("  Type:                              ");
			switch (ehdr64.e_type)
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
				printf("<unknown: %x>\n", ehdr64.e_type);
			}

			printf("  Entry point address:               %#lx\n",
				   (unsigned long)ehdr64.e_entry);
		}
		else
		{
			fprintf(stderr, "%s is not a valid ELF binary.\n", argv[1]);
			close(fd);
			return (98);
		}
	}
	/*Handle 32-bit ELF files*/
	else if (read(fd, &ehdr32, sizeof(ehdr32)) == sizeof(ehdr32))
	{
		/*Check if the file is a valid ELF binary*/
		if (memcmp(ehdr32.e_ident, ELFMAG, SELFMAG) == 0)
		{
			int i;

			printf("ELF Header:\n");
			printf("  Magic:   ");
			for (i = 0; i < EI_NIDENT; i++)
				printf("%02x%c", ehdr32.e_ident[i], i + 1 < EI_NIDENT ? ' ' : '\n');

			/*Print other ELF header information for 32-bit ELF*/
			printf("  Class:                             ELF32\n");
			printf("  Data:                              2's complement, ");
			printf("little endian\n");
			printf("  Version:                           %d (current)\n",
				   ehdr32.e_ident[EI_VERSION]);

			printf("  OS/ABI:                            ");
			switch (ehdr32.e_ident[EI_OSABI])
			{
			case ELFOSABI_SYSV:
				printf("UNIX - System V\n");
				break;
			case ELFOSABI_NETBSD:
				printf("UNIX - NetBSD\n");
				break;
			case ELFOSABI_SOLARIS:
				printf("UNIX - Solaris\n");
				break;
			default:
				printf("<unknown: %x>\n", ehdr32.e_ident[EI_OSABI]);
			}

			printf("  ABI Version:                       %d\n",
				   ehdr32.e_ident[EI_ABIVERSION]);

			printf("  Type:                              ");
			switch (ehdr32.e_type)
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
				printf("<unknown: %x>\n", ehdr32.e_type);
			}

			printf("  Entry point address:               %#lx\n",
				   (unsigned long)ehdr32.e_entry);
		}
		else
		{
			fprintf(stderr, "%s is not a valid ELF binary.\n", argv[1]);
			close(fd);
			return (98);
		}
	}
	else
	{
		perror("Error");
		close(fd);
		return (98);
	}

	close(fd);
	return (0);
}
