#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix.
 *
 * @a: The pointer to the square matrix.
 * @size: The size of the square matrix.
 */
void print_diagsums(int *a, int size)
{
int i, diagonal1 = 0, diagonal2 = 0;
for (i = 0; i < size; i++)
{
diagonal1 += a[i * size + i];
}

for (i = 0; i < size; i++)
{
diagonal2 += a[i * size + (size - 1 - i)];
}

printf("%d, %d\n", diagonal1, diagonal1);
}
