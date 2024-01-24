#include <stddef.h>

/**
 * array_iterator - Function that executes a function given as a
 * parameter on each element of an array.
 * @array: Array to be iterated over.
 * @size: size of the array.
 * @action: pointer to the function you need to use.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned long int i;
if (action != NULL)
{
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
}
