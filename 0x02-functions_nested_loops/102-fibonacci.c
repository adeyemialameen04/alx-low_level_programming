#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * Description: This program generates the first 50 terms of the Fibonacci
 * sequence and prints them with commas between each term, except for the last
 * one. The Fibonacci sequence starts with 1 and 2, and each subsequent term
 * is the sum of the two preceding ones.
 *
 * Return: Always returns 0 to indicate successful completion.
 */
int main(void)
{
int numberOfTerms, n1, n2, nextTerm, i;
n1 = 1;
n2 = 2;
numberOfTerms = 50;

for (i = 1; i <= numberOfTerms; i++)
{
if (numberOfTerms != 0)
{
nextTerm = n1 + n2;
n1 = n2;
n2 = nextTerm;
if (i == 50)
printf("%d", n1);
else
printf("%d, ", n1);
}
}
putchar('\n');
return (0);
}
