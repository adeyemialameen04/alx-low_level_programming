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
switch (format[i])
{
case 'c':
ch = va_arg(args, int);
printf("%c", ch);
break;
case 'i':
num = va_arg(args, int);
printf("%d", num);
break;
case 'f':
flt = va_arg(args, double);
printf("%f", flt);
break;
case 's':
str = va_arg(args, char*);
printf("%s", (str != NULL) ? str : "(nil)");
break;
}

i++;
}

printf("\n");
va_end(args);
}
