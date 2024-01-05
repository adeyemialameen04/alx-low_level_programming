#include <stdio.h>
#include "main.h"

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
_putchar(ch);
_putchar('\n');
}
