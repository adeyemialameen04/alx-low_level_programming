#include <stdio.h>

/**
* main - Entry point of the program
*
* This program generates all possible combinations of two two-digit numbers.
*
* Return: Always returns 0 to indicate successful completion.
*/
int main(void)
{
int digit1_tens, digit1_ones, digit2_tens, digit2_ones;

for (digit1_tens = 0; digit1_tens <= 9; digit1_tens++)
{
for (digit1_ones = 0; digit1_ones <= 9; digit1_ones++)
{
for (digit2_tens = 0; digit2_tens <= 9; digit2_tens++)
{
for (digit2_ones = 0; digit2_ones <= 9; digit2_ones++)
{
int num1 = digit1_tens * 10 + digit1_ones;
int num2 = digit2_tens * 10 + digit2_ones;

if (num1 < num2)
{
putchar(digit1_tens + '0');
putchar(digit1_ones + '0');
putchar(' ');
putchar(digit2_tens + '0');
putchar(digit2_ones + '0');

if (!(digit1_tens == 9 && digit1_ones == 9 &&
digit2_tens == 9 && digit2_ones == 9))
{
putchar(',');
putchar(' ');
}
}
}
}
}
}

putchar('\n');
return (0);
}
