#include <stdio.h>
#include <ctype.h>

/**
 * print_buffer - Prints the content of a buffer.
 * @b: The buffer to be printed.
 * @size: The size of the buffer.
 *
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int i, j;

	if (size <= 0)
	{
		printf("\n");
		return;
	}

	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);

		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
			{
				printf("%02x ", b[i + j]);
			}
			else
			{
				printf("   ");
			}
		}

		printf(" ");

		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
			{
				putchar(isprint(b[i + j]) ? b[i + j] : '.');
			}
		}

		printf("\n");
	}
}
