#include "main.h"

/**
 * _strlen - Calculate the length of a string
 * @s: Pointer to the string
 *
 * Description: This function takes as an argument a pointer to a string (s)
 * and calculates the length of the string by iterating through its characters
 * until it encounters the null terminator ('\0').
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	int count = 0, i = 0;

	while (s[i] != '\0')
	{
		count++;
		i++;
	}
	return (count);
}
