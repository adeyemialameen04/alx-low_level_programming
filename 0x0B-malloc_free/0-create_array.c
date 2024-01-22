#include <stdlib.h>
#include <string.h>

/**
 * create_array - Allocates memory for an array of chars and
 * initializes it with a specific char.
 * @size: The size of the array.
 * @c: The character used for initialization.
 *
 * Return: If the memory allocation is successful, returns a
 * pointer to the allocated array;
 *         otherwise, returns NULL.
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;
if (size == 0)
return (NULL);
char *array = malloc(sizeof(char) * size);

if (array == NULL)
{
return (NULL);
}

for (i = 0; i < size; i++)
array[i] = c;


return (array);
}
