#include "main.h"

/**
* times_table - Print the 9 times table, starting from 0.
*/
void times_table(void)
{
int row, column, product, tens, ones;

for (row = 0; row < 10; row++)
{
for (column = 0; column < 10; column++)
{
product = row * column;

if (product < 10 && column != 0)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
}

if (product < 10)
_putchar('0' + product);

if (product > 9)
{
tens = product / 10;
ones = product % 10;

_putchar(',');
_putchar(' ');
_putchar('0' + tens);
_putchar('0' + ones);
}
}
_putchar('\n');
}
}
