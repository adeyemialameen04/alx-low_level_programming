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
unsigned int i, j, len1 = 0, len2 = 0;
char *concatenated;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

while (s1[len1] != '\0')
len1++;

while (s1[len2] != '\0')
len2++;

concatenated = malloc(sizeof(char) * (len1 + len2 + 1));

if (concatenated == NULL)
return (NULL);

for (i = 0; i < len1; i++)
concatenated[i] = s1[i];

for (j = 0; j <= len2; j++)
concatenated[len1 + j] = s2[i];

return (concatenated);
}
