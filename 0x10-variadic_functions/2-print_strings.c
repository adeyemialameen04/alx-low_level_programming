#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Print strings.
 * @separator: - Separator to separate the strings
 * @n: The number of integers to to be passed.
 * @...: Variable arguments to be summed.
 *
 * Return: Void.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list args;
va_start(args, n);

for (i = 0; i < n; i++)
{
char *x = va_arg(args, char*);
printf("%s", (x != NULL) ? x : "(nil)");
if (i < n - 1 && separator != NULL)
printf("%s", separator);
}

printf("\n");
va_end(args);
}
