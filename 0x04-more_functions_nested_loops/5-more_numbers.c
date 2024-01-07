#include "main.h"

/**
 * more_numbers - Prints 10 sets of numbers from 0 to 14,followed by a newline.
 *
 * Description: This function prints a pattern of numbers where each set
 * represents the numbers 0 to 14 in sequence. It repeats this pattern 10times,
 * with each set followed by a newline character. The function utilizes the
 * _putchar function for character output.
 */
void more_numbers(void)
{
int lines, i;
lines = 1;
while (lines <= 10)
{
for (i = 0; i <= 14; i++)
{
if (i > 9)
_putchar('0' + i / 10);
_putchar('0' + i % 10);
}
_putchar('\n');
lines++;
}
}
