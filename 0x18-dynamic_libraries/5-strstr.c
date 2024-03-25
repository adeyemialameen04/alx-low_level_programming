#include <stdio.h>

/**
 * _strstr - Locates a substring in a string.
 *
 * @haystack: The main string to search in.
 * @needle: The substring to search for.
 *
 * Return: A pointer to the beginning of the located substring in the haystack,
 *         or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
int i, j;

if (*needle == '\0')
{
return (haystack);
}

for (i = 0; haystack[i] != '\0'; i++)
{
for (j = 0; needle[j] != '\0'; j++)
{
if (needle[j] != haystack[i + j])
{
break;
}
}
if (needle[j] == '\0')
{
return (&haystack[i]);
}
}

return (NULL);
}
