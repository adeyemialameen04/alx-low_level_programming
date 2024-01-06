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
int num;
for (num = 0; num <= 98; num++)
putchar(num + '0');
putchar('\n');
return (0);
}
