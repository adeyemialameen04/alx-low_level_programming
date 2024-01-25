#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Sum a variable number of integers.
 * @separator: - Separator to separate the ints
 * @n: The number of integers to to be passed.
 * @...: Variable arguments to be summed.
 *
 * Return: The sum of the provided integers.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list args;

va_start(args, n);
for (i = 0; i < n; i++)
{
int x = va_arg(args, int);
printf("%d", x);

if (i < n - 1 && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(args);
}
