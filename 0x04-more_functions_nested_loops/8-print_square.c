#include "main.h"

/**
 * print_square - Prints a square pattern of '#' characters.
 * @size: Size of the square.
 */
void print_square(int size)
{
int i, j;

if (size <= 0)
{
_putchar('\n');
return;
}

for (i = 1; i <= size; i++)
{
for (j = 1; j <= size; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
