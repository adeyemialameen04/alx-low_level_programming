#include <stdarg.h>

/**
 * sum_them_all - Sum a variable number of integers.
 * @n: The number of integers to sum.
 * @...: Variable arguments to be summed.
 *
 * Return: The sum of the provided integers.
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int i;
int sum = 0;
va_list args;
if (n == 0)
va_start(args, n);
{
return (0);
}
for (i = 0; i < n; i++)
{
int x = va_arg(args, int);
sum = sum + x;
}

va_end(args);
return (sum);
}
