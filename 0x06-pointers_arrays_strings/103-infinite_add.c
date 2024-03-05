#include <stdio.h>
#include <stdlib.h>
#include "string.h"

/**
 * infinite_add - Adds two positive numbers represented as strings.
 * @n1: First number (as a string).
 * @n2: Second number (as a string).
 * @r: Buffer to store the result.
 * @size_r: Size of the buffer.
 *
 * Return: Pointer to the result (r) or 0 if result cannot be stored.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r);
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, k, len1, len2, carry;

	len1 = strlen(n1);
	len2 = strlen(n2);

	if (len1 + len2 + 2 >= size_r)
	{
		return (0);
	}

	k = size_r - 1;
	r[k] = '\0';
	k--;

	carry = 0;
	i = len1 - 1;
	j = len2 - 1;
	while (i >= 0 || j >= 0 || carry)
	{
		int digit1 = (i >= 0) ? n1[i] - '0' : 0;
		int digit2 = (j >= 0) ? n2[j] - '0' : 0;
		int sum = digit1 + digit2 + carry;

		carry = sum / 10;
		r[k] = '0' + (sum % 10);
		k--;
		i--;
		j--;
	}

	i = 0;
	while (r[i] == '0' && r[i + 1] != '\0')
	{
		i++;
	}
	for (j = i; j < size_r; j++)
	{
		r[j - i] = r[j];
	}
	r[size_r - i] = '\0';

	return (r);
}
