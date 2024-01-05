#include <stdio.h>

void print_alphabet(void);

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
print_alphabet();
return (0);
}

/**
 * print_alphabet - Prints the alphabet in lowercase followed by a new line.
 *
 * This function iterates through the lowercase alphabet ('a' to 'z')
 * and prints each character on the standard output, followed by a new line.
 * It serves the purpose of demonstrating the printing of the alphabet.
 */
void print_alphabet(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
putchar(ch);
putchar('\n');
}
