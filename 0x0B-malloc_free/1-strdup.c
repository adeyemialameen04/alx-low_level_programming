#include <stdlib.h>

/**
 * _strdup - Duplicates a string in newly allocated memory.
 * @str: The input string to duplicate.
 *
 * Return: A pointer to the newly allocated string (duplicate).
 *         NULL if str is NULL or if memory allocation fails.
 */

char *_strdup(char *str)
{
unsigned int i, length = 0;
char *duplicate;

if (str == NULL)
return (NULL);

while (str[length] != '\0')
length++;

duplicate = malloc(sizeof(char) * (length + 1));

if (duplicate == NULL)
return (NULL);

for (i = 0; i <= length; i++)
duplicate[i] = str[i];

return (duplicate);
}
