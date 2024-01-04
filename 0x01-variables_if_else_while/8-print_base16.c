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
int nums;
char ch;
for (nums = 0; nums <= 9; ++nums)
putchar(nums + '0');
for (ch = 'a'; ch <= 'f'; ++ch)
putchar(ch);
putchar('\n');
return (0);
}
