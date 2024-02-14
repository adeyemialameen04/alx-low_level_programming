#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>

#define BUFFER_SIZE 1024

/**
 *	main - copies the content of a file to another
 *	@argc: number of arguments passed to the program
 *	@argv: array of arguments passed to the program
 *	Return: 0 on success, exit status otherwise
 *	Description:
 *	This function copies the contents of a file specified by the first
 *	argument (argv[1]) to another file specified by the second argument
 *	(argv[2]). It opens both files, reads from the source file in chunks
 *	of BUFFER_SIZE, and writes those chunks to the destination file until
 *	the end of the source file is reached. Error messages are printed to
 *	standard error using dprintf in case of any errors during opening,
 *	reading, or writing. File descriptors are closed properly upon success
 *	or error.
 *	Exit status:
 *	97: If incorrect number of arguments are provided
 *	98: If there is an error opening the source file
 *	99: If there is an error reading from the source file or writing to
 *	  the destination file
 *	100: If there is an error closing either file descriptor
 */
int main(int argc, char *argv[]);
int main(int argc, char *argv[])
{
	int from, to, nread, nwrite;
	char buf[BUFFER_SIZE];
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	from = open(argv[1], O_RDONLY);
	if (from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	to = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, mode);
	if (to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[1]);
		close(to);
		exit(99);
	}

	do
	{
		nread = read(from, buf, BUFFER_SIZE);
		if (nread == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			close(from);
			close(to);
			exit(99);
		}
		if (nread == 0)
		{
			break;
		}
		if (nread > 0)
		{
			nwrite = write(to, buf, nread);
			if (nwrite == -1)
			{
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
				close(from);
				close(to);
				exit(99);
			}
		}
	} while (nread > 0);

	if (close(from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from);
		exit(100);
	}

	if (close(to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to);
		exit(100);
	}

	return (0);
}
