#include <string.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Prints values based on a given format string and variable
 * arguments.
 * @format: A format string containing type specifiers('c','i','f','s').
 *       Each type specifier corresponds to the type of the following argument.
 *          If the string is NULL for 's', "(nil)" is printed.
 *          Any other characters are ignored.
 *
 * Return: No return value.
 */
void print_all(const char * const format, ...)
{
int i = 0;
va_list args;
char *str;
int num;
char ch;
float flt;

va_start(args, format);

while (format && format[i])
{
if (format[i] == '%' && format[i + 1] == 'c')
{
ch = va_arg(args, int);
printf("%c", ch);
}
else if (format[i] == '%' && format[i + 1] == 'i')
{
num = va_arg(args, int);
printf("%d", num);
}
else if (format[i] == '%' && format[i + 1] == 'f')
{
flt = va_arg(args, double);
printf("%f", flt);
}
else if (format[i] == '%' && format[i + 1] == 's')
{
str = va_arg(args, char*);
printf("%s", (str != NULL) ? str : "(nil)");
break;
}



i++;
if (format[i] && (format[i] == 'c' || format[i] == 'i' ||
format[i] == 'f' || format[i] == 's'))
printf(", ");
}

printf("\n");
va_end(args);
}
