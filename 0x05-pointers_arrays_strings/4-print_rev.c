#include <stdio.h>
#include "main.h"

/**
 * print_rev - Reverse and print a string
 * @s: Pointer to the string to be reversed and printed
 *
 * Description: This function takes as an argument a pointer to a string (s),
 * calculates the length of the string using the helper function _strlen,
 * reverses the string in place, and then prints the reversed string to
 * the standard output using the puts function.
 */
void print_rev(char *s)
{
int len = 0, i;
char ch;
len = _strlen(s);
for (i = 0; i < len / 2; i++)
{
ch = s[i];
s[i] = s[len - i - 1];
s[len - i - 1] = ch;
}
puts(s);
}
