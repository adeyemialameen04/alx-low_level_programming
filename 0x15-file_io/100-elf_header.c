#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

/**
 * print_elf_header - Print information from the ELF header.
 * @ehdr: Pointer to the ELF header structure.
 */
void print_elf_header(Elf64_Ehdr *ehdr);
void print_elf_header(Elf64_Ehdr *ehdr)
{
	int i;

	printf("ELF Header:\n");

	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%02x%c", ehdr->e_ident[i], i + 1 < EI_NIDENT ? ' ' : '\n');

	printf("  Class:                             ");
	switch (ehdr->e_ident[EI_CLASS])
	{
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("<unknown: %x>\n", ehdr->e_ident[EI_CLASS]);
	}

	printf("  Data:                              ");
	switch (ehdr->e_ident[EI_DATA])
	{
	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;
	default:
		printf("<unknown: %x>\n", ehdr->e_ident[EI_DATA]);
	}

	printf("  Version:                           %d (current)\n",
		   ehdr->e_ident[EI_VERSION]);

	printf("  OS/ABI:                            ");
	switch (ehdr->e_ident[EI_OSABI])
	{
	case ELFOSABI_SYSV:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;

	default:
		printf("<unknown: %x>\n", ehdr->e_ident[EI_OSABI]);
	}

	printf("  ABI Version:                       %d\n",
		   ehdr->e_ident[EI_ABIVERSION]);

	printf("  Type:                              ");
	switch (ehdr->e_type)
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
		printf("<unknown: %x>\n", ehdr->e_type);
	}

	printf("  Entry point address:               %#lx\n",
		   (unsigned long)ehdr->e_entry);
}
