#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * This program generates a random number, prints the last digit of the number,
 * and provides information about the last digit according to
 * the specified conditions.
 *
 * Return: Always returns 0 to indicate successful completion.
 */
int main(void)
{
int number1, number2;
for (number1 = 0; number1 <= 8; number1++)
{
for (number2 = number1 + 1; number2 <= 9; number2++)
{
putchar(number1 + '0');
putchar(number2 + '0');
if (number1 != 8 || number2 != 91)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
