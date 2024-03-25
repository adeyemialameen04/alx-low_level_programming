#include <stdio.h>
#include <string.h>

/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string.
 *
 * Return: A pointer to the resulting concatenated string.
 */
char *_strcat(char *dest, char *src)
{
	int len1 = 0;
	int len2 = 0, i;

	len1 = strlen(dest);
	len2 = strlen(src);

	for (i = 0; i <= len2; i++)
	{
		dest[len1 + i] = src[i];
	}

	return (dest);
}
