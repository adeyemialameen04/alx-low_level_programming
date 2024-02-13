#include <stdlib.h>
#include <sys/types.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * read_textfile - Reads and prints a text file to the POSIX standard output.
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 * Return: The actual number of letters read and printed.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int nread, written;
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	nread = read(fd, buf, letters);
	if (nread == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}

	written = write(STDOUT_FILENO, buf, nread);
	if (written == -1 || written != nread)
	{
		free(buf);
		close(fd);
		return (0);
	}

	free(buf);
	close(fd);

	return (nread);
}
