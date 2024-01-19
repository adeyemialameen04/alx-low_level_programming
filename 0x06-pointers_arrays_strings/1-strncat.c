#include <stdio.h>
#include <string.h>

/**
 * _strncat - Concatenates two strings up to a specified number of characters.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The maximum number of characters to concatenate from src.
 *
 * Description:
 * The _strncat function appends up to n characters from the src string to the
 * end of the dest string. If the length of src is less than n, the entire src
 * string is appended. The resulting string is null-terminated.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
int len1, len2, i;
len1 = strlen(dest);
len2 = strlen(src);

for (i = 0; i < n; i++)
{
    dest[len1 + i] = src[i];
}

return (dest);
}