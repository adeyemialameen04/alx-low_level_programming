#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * Description: This program generates the first 100 terms of the Fibonacci
 * sequence and prints them with commas between each term, except for the last
 * one. The Fibonacci sequence starts with 1 and 2, and each subsequent term
 * is the sum of the two preceding ones.
 *
 * Return: Always returns 0 to indicate successful completion.
 */
int main(void)
{
int numberOfTerms = 50, i = 1;
long int n1 = 1, n2 = 2, nextTerm;
while (i <= numberOfTerms)
{
if (i == numberOfTerms)
printf("%lu\n", n1);
else
{
printf("%lu, ", n1);
nextTerm = n1 + n2;
n1 = n2;
n2 = nextTerm;
}
i++;
}
return (0);
}
