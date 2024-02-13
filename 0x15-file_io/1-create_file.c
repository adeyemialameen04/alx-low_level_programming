#include <stdlib.h>
#include <sys/types.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

/**
 * create_file - Reads and prints a text file to the POSIX standard output.
 * @filename: The name of the file to read.
 * @text_content: The number of letters to read and print.
 * Return: The actual number of letters read and printed.
 */
int create_file(const char *filename, char *text_content)
{
	int len = strlen(text_content);
	int written, fd;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0660);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		written = write(fd, text_content, len);
		if (written == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
