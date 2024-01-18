#include <stdio.h>
#include "main.h"

/**
 * print_array - Print elements of an array
 * @a: Pointer to the array
 * @n: Number of elements in the array
 *
 * Description: This function takes as arguments a pointer to an array (a)
 * and the number of elements in the array (n), and prints the elements to
 * the standard output. It avoids placing a comma after the last element.
 */
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
printf("%d", a[i]);
if (i < n - 1)
printf(" ,");
}
printf("\n");
}
