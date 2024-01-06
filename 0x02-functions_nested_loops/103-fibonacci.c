#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * Description: This program calculates the sum of even Fibonacci numbers up to
 * the 32nd term. It initializes the first two terms of the Fibonacci sequence,
 * iterates through the sequence, adds even terms to the sum, and prints the
 * result.
 *
 * Return: Always returns 0 to indicate successful completion.
 */
int main(void)
{
int numberOfTerms = 32, i = 1;
long int n1 = 1, n2 = 2, nextTerm, sum;
sum = 0;
while (i <= numberOfTerms)
{
if (n1 % 2 == 0)
{
sum += n1;
}
nextTerm = n1 + n2;
n1 = n2;
n2 = nextTerm;
i++;
}
printf("%lu\n", sum);
return (0);
}
