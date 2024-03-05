#include "main.h"
#include <stdio.h>

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
				printf("%02x%02x", (unsigned char)b[i + j],
					   (i + j + 1 < size) ? (unsigned char)b[i + j + 1] : 0);
			else
				printf("    ");

			if (j % 2)
				printf(" ");
		}

		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
				printf("%c", (b[i + j] >= 32 && b[i + j] <= 126) ? b[i + j] : '.');
		}

		printf("\n");
	}
}
