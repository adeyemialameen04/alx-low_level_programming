#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - Function to add two variables.
 * @a: First integer.
 * @b: Second integer.
 * Return: Sum of x and y.
 */
int op_add(int a, int b)
{
return (a + b);
}

/**
 * op_sub - Function to subtract two variables.
 * @a: First integer.
 * @b: Second integer.
 * Return: Subtraction of x and y.
 */
int op_sub(int a, int b)
{
return (a - b);
}

/**
 * op_mul - Function to multiply two variables.
 * @a: First integer.
 * @b: Second integer.
 * Return: Product of x and y.
 */
int op_mul(int a, int b)
{
return (a * b);
}

/**
 * op_div - Function to divide two variables.
 * @a: First integer.
 * @b: Second integer.
 * Return: Division of x and y.
 */
int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a / b);
}

/**
 * op_mod - Function to modulo two variables.
 * @a: First integer.
 * @b: Second integer.
 * Return: Modulo of x and y.
 */
int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a % b);
}
