#include  "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet ten times in lowercase followed by
 * a new line.
 *
 * This function iterates through a variable from 0 to 9
 * and calls a function that prints each character followed by a new line
 * on the standard output, followed by a new line.
 * It serves the purpose of demonstrating the printing of the alphabet
 * ten times.
 */
void print_alphabet_x10(void)
{
int times;

for (times = 0; times <= 9; times++)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
_putchar(ch);
_putchar('\n');
}
}
