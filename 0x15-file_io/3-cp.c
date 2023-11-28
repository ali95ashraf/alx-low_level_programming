#include "main.h"
#include <errno.h>

#define USAGE "Usage: cp file_from file_to\n"
#define ERR_NOREAD "Error: Can't read from file %s\n"
#define ERR_NOWRITE "Error: Can't write to %s\n"
#define ERR_NOCLOSE "Error: Can't close FileDescriptors %d\n"
#define PERMISSIONS (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)
/**
 * main - program
 * @ac: argument count
 * @av: argument vector
 * Return: 1 on success 0 on failure
 */
int main(int ac, char **av)
{
	int from_FileDescriptors = 0, to_FileDescriptors = 0;
	ssize_t b;
	char buf[READ_BUF_SIZE];

	if (ac != 3)
		dprintf(STDERR_FILENO, USAGE), exit(97);
	from_FileDescriptors = open(av[1], O_RDONLY);
	if (from_FileDescriptors == -1)
		dprintf(STDERR_FILENO, ERR_NOREAD, av[1]), exit(98);
	to_FileDescriptors = open(av[2], O_WRONLY |
			O_CREAT | O_TRUNC, PERMISSIONS);
	if (to_FileDescriptors == -1)
		dprintf(STDERR_FILENO, ERR_NOWRITE, av[2]), exit(99);
	while ((b = read(from_FileDescriptors, buf, READ_BUF_SIZE)) > 0)
		if (write(to_FileDescriptors, buf, b) != b)
			dprintf(STDERR_FILENO, ERR_NOWRITE, av[2]), exit(99);
	if (b == -1)
		dprintf(STDERR_FILENO, ERR_NOREAD, av[1]), exit(98);

	from_FileDescriptors = close(from_FileDescriptors);
	to_FileDescriptors = close(to_FileDescriptors);
	if (from_FileDescriptors)
		dprintf(STDERR_FILENO, ERR_NOCLOSE, from_FileDescriptors),
			exit(100);
	if (to_FileDescriptors)
		dprintf(STDERR_FILENO, ERR_NOCLOSE, to_FileDescriptors),
			exit(100);
	return (EXIT_SUCCESS);
}
