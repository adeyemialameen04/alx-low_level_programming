#include <stdio.h>
#include "main.h"

/**
 * main - Entry point of the program
 *
 * Description: This function serves as the starting point of the program
 * and is automatically executed when the program is run. It may call other
 * functions or perform tasks based on the program's requirements. The return
 * value is an integer, typically used to indicate the success or failure of
 * the program execution.
 *
 * Return: Always returns 0 to indicate successful completion.
 */
int main(void)
{
int i, sum;
sum = 0;
for (i = 0; i < 1024; i++)
{
if (i % 3 == 0 || i % 5 == 0)
{
sum += i;
}
}
printf("%d\n", sum);
return (0);
}
