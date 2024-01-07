#include "main.h"
#include <stdio.h>

/**
* main - tests function that prints if integer is positive or negative
* Return: 0
*/

int main(void)
{
int i;
int a, b, c, result;

i = 0;
a = 20;
b = -10;
c = 10;
// positive_or_negative(i);
result = largest_number(a, b, c);
printf("The largest number is %d\n", result);

return (0);
}
