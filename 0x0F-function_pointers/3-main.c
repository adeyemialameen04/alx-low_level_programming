#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
* main - Entry point of the calculator program.
* @argc: Number of arguments.
* @argv: Array of arguments.
*
* Return: Always 0 (success).
*/
int main(int argc, char *argv[])
{
int num1, num2, result;
int (*operation)(int, int);

if (argc != 4)
{
printf("Error\n");
exit(98); /* Return non-zero for error */
}

num1 = atoi(argv[1]);
num2 = atoi(argv[3]);

operation = get_op_func(argv[2]);

if (operation == NULL)
{
printf("Error\n");
exit(99); /* Return non-zero for error */
}

result = operation(num1, num2);
printf("%d\n", result);

return (0);
}
