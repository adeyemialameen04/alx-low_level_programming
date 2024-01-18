#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * puts2 - Print every second character of a string
 * @str: Pointer to the string
 *
 * Description: This function takes as an argument a pointer to a string (str),
 * calculates the length of the string using the strlen function, and then
 * prints every second character of the string to the standard output.
 */
void puts2(char *str)
{
int i, len = 0;
len = strlen(str);
for (i = 0; i < len; i++)
{
if (i == 0 || i % 2 == 0)
{
printf("%c", str[i]);
}
}
printf("\n");
}
