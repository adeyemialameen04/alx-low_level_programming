#include "main.h"
#include <stdio.h>

/**
 * print_times_table - Prints the times table up to a given number.
 * @n: The highest value for the times table (0 to 15).
 */
void print_times_table(int n)
{
int row, column, product;

if (n >= 0 && n <= 15)
{
for (row = 0; row <= n; row++)
{
for (column = 0; column <= n; column++)
{
product = row * column;

if (column != 0)
{
printf(", ");
if (product < 10)
printf("  ");
else if (product < 100)
printf(" ");
}

printf("%d", product);
}
printf("\n");
}
}
}
