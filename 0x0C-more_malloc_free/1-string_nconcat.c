#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Concatenates two strings up to n bytes.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes from s2 to concatenate.
 *
 * Return: A pointer to the concatenated string.
 *         If memory allocation fails, returns NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int len1 = 0, len2 = 0, total_len = 0, i, j;
char *result;
if (!s1)
{
s1 = "";
}
if (!s2)
{
s2 = "";
}
len1 = strlen(s1);
len2 = strlen(s2);
if (n >= len2)
n = len2;
total_len = len1 + n + 1;
result = malloc(sizeof(char) * total_len);

if (result == NULL)
return (NULL);

for (i = 0; i < len1; i++)
result[i] = s1[i];

for (j = 0; j <= n; j++)
result[len1 + j] = s2[j];

result[len1 + n] = '\0';

return (result);
}
