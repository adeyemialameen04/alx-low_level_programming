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
unsigned long int number, largest;
number = 612852475143;
largest = 2;

while (number > largest)
{
if (number % largest == 0)
number /= largest;
else
largest++;
}

printf("%lu\n", largest);
return (0);
}
