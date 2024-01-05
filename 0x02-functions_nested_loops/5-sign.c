#include "main.h"

/**
 * print_sign - Checks if a number is positve negative or zero.
 *
 * @n: The number to be checked.
 *
 * Return: 1 if the number is a positive, 0 if its 0 and -1 if its negative.
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else 
{
return (0);
}
}
