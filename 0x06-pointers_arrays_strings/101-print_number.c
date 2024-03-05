#include <limits.h>
#include "main.h"

/**
 * printDigit - Print a single digit
 * @digit: Digit to be printed
 */
void printDigit(int digit)
{
	_putchar(digit + '0');
}

/**
 * print_number - Print an int
 * @n: Int number to be printed
 */
void print_number(int n)
{
	if (n == INT_MIN)
	{
		_putchar('-');
		_putchar('2');
		n = 147483648;
	}

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n == 0)
	{
		printDigit(0);
	}
	else
	{
		int digits = 0, divisor = 1, temp = n, i;

		while (temp != 0)
		{
			temp = temp / 10;
			digits++;
		}
		for (i = 1; i < digits; i++)
			divisor *= 10;
		while (divisor > 0)
		{
			int digit = n / divisor;

			printDigit(digit);
			n = n % divisor;
			divisor = divisor / 10;
		}
	}
}
