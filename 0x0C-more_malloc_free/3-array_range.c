#include <stdlib.h>

/**
 * array_range - Creates an array of integers from min to max.
 * @min: The minimum value.
 * @max: The maximum value.
 *
 * Return: A pointer to the newly created array.
 *         If min > max or if malloc fails, returns NULL.
 */
int *array_range(int min, int max)
{
int *array;
int size = 0, i;
if (min >  max)
return (NULL);

size = max - min + 1;
array = malloc(sizeof(int) * size);

if (array == NULL)
return (NULL);

for (i = 0; i < size; i++)
array[i] = min++;

return (array);
}
