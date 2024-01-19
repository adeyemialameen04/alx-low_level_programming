#include <stdio.h>

/**
 * reverse_array - Prints the elements of an array in reverse order.
 * @a: The array of integers.
 * @n: The number of elements in the array.
 *
 * Description: This function prints the elements of the given array in
 * reverse order, separating them with a comma except for the last element.
 *
 * Return: void (no return value)
 */
void reverse_array(int *a, int n)
{
int i;
for (i = n - 1; i >= 0; i--)
{
printf("%d", a[i]);
if (i > 0)
printf(", ");
}
printf("\n");
}
