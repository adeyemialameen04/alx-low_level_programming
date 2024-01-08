#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * This program prints the largest prime factor of the number 612852475143,
 *
 * Return: Always returns 0 to indicate successful completion.
 */
int main(void)
{
int i;
unsigned long int number;
number = 612852475143;
for (i = 2; i <= number / i; i++)
{
while (number % i == 0)
{
number = number / i;
}
}
if (number > 1)
{
printf("%lu\n", number);
}
}
