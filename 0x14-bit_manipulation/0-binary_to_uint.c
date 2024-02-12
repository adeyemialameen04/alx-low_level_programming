#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - Converts and prints and  integer to binary
 * @b: Int to be converted
 * Return: The result
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] >= '0' && b[i] <= '1')
		{
			result = (result << 1) | (b[i] - '0');
		}
		else
		{
			return (0);
		}
	}

	return (result);
}
