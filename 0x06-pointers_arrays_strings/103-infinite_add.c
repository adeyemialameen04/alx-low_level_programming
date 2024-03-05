#include "main.h"
#include <stdio.h>

/**
 * infinite_add - Adds two numbers.
 * @n1: The first number as a string.
 * @n2: The second number as a string.
 * @r: The buffer to store the result.
 * @size_r: The size of the buffer.
 *
 * Return: A pointer to the result, or 0 if the result cannot be stored.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, carry = 0, len1, len2, max_len;

	/* Calculate the lengths of the input strings */
	for (len1 = 0; n1[len1] != '\0'; len1++)
		;
	for (len2 = 0; n2[len2] != '\0'; len2++)
		;

	max_len = (len1 > len2) ? len1 : len2;

	if (max_len + 1 > size_r)
		return (0);

	r[max_len + 1] = '\0';

	for (i = len1 - 1, j = len2 - 1; i >= 0 || j >= 0 || carry > 0; i--, j--)
	{
		int digit1 = (i >= 0) ? (n1[i] - '0') : 0;
		int digit2 = (j >= 0) ? (n2[j] - '0') : 0;
		int sum = digit1 + digit2 + carry;

		carry = sum / 10;
		r[max_len] = (sum % 10) + '0';

		max_len--;
	}

	return (r);
}
