#include "main.h"
#include <stdio.h>

/**
 * times_table - Prints the 9 times table, starting with 0.
 */
void times_table(void)
{
int i, input;
for (i = 0; i <= 9; i++)
{
for (input = 0; input <= 9; input++)
if (input == 9)
printf("%d", i * input);
else
printf("%d, ", i * input);
printf("\n");
}
}
