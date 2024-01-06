#include "main.h"
#include <stdio.h>

/**
 * times_table - Prints the 9 times table, starting with 0.
 */
void times_table(void)
{
int i, input, result;
for (i = 0; i <= 9; i++)
{
for (input = 0; input <= 9; input++)
{
result = i * input;
if (input == 0)
printf("%2d", result);
else if (input == 9)
printf("%3d", result);
else
printf("%3d, ", result);
}
printf("\n");
}
}
