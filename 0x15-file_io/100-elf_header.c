#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>
#include "main.h"

/**
 * print_info - Print ELF header information
 * @hdr: Pointer to Elf64_Ehdr structure containing header information
 *
 * Description: Prints various fields of the ELF header.
 */
void print_info(Elf64_Ehdr *hdr)
{
	int i; /* Variable declaration */

	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; ++i)
	{
		printf("%02x", hdr->e_ident[i]);
		if (i < EI_NIDENT - 1)
			printf(" ");
	}
	printf("\n");
	printf("  Class:                             %s\n", hdr->e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "ELF32");
	printf("  Data:                              %s\n", hdr->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
	printf("  Version:                           %d (current)\n", hdr->e_ident[EI_VERSION]);
	printf("  OS/ABI:                            %s\n", hdr->e_ident[EI_OSABI] == ELFOSABI_SYSV ? "UNIX - System V" : "unknown");
	printf("  ABI Version:                       %d\n", hdr->e_ident[EI_ABIVERSION]);

	printf("  Type:                              %d (Executable file)\n", hdr->e_type);
	printf("  Entry point address:               %#lx\n", (unsigned long)hdr->e_entry);
}

/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Description: Displays information contained in the ELF header at the start of an ELF file.
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char *argv[])
{
	int fd; /* File descriptor */
	Elf64_Ehdr header; /* ELF header */

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: %s elf_filename\n", argv[0]);
		exit(98);
	}

	fd = open(argv[1], O_RDONLY); /* Open the file for reading */
	if (fd == -1)
	{
		perror("open");
		exit(98);
	}

	if (read(fd, &header, sizeof(header)) != sizeof(header))
	{
		perror("read");
		close(fd);
		exit(98);
	}

	/* Check if it's an ELF file */
	if (header.e_ident[EI_MAG0] != ELFMAG0 || header.e_ident[EI_MAG1] != ELFMAG1 ||
	    header.e_ident[EI_MAG2] != ELFMAG2 || header.e_ident[EI_MAG3] != ELFMAG3)
	{
		dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
		close(fd);
		exit(98);
	}

	print_info(&header); /* Print ELF header information */

	close(fd); /* Close the file */
	return (0);
}
