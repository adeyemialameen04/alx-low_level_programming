#include <stdio.h>
#include "main.h"

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
naturalNumbers();
return (0);
}

/**
 * naturalNumbers - Calculates the sum of natural numbers less than 1024
 *                  that are multiples of 3 or 5.
 *
 * Return: The calculated sum.
 */
int naturalNumbers(void)
{
int i, sum;
sum = 0;
for (i = 0; i < 1024; i++)
{
if (i % 3 == 0 || i % 5 == 0)
{
sum += i;
}
}
printf("%d\n", sum);
}
