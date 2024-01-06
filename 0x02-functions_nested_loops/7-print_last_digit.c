#include "main.h"

/**
 * print_last_digit - Returns the last digit of a number.
 * @number: The integer from which to extract the last digit.
 *
 * Return: The last digit of the input number.
 */
int print_last_digit(int number)
{
int lastDigit;
lastDigit = number % 10;
if (lastDigit < 0)
lastDigit = -lastDigit;
_putchar(lastDigit + '0');
return (lastDigit);
}
