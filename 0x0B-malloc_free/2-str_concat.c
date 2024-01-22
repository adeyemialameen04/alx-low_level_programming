#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The first input string.
 * @s2: The second input string.
 *
 * Return: A pointer to a newly allocated space in memory
 *         containing the concatenated string.
 *         NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
unsigned int i, j, len1 = 0, len2 = 0, total_len = 0;
char *concatenated;
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
total_len = len1 + len2 + 1;

concatenated = malloc(sizeof(char) * total_len);

if (!concatenated)
return (NULL);

for (i = 0; i < len1; i++)
concatenated[i] = s1[i];

for (j = 0; j <= len2; j++)
concatenated[len1 + j] = s2[j];

return (concatenated);
}
