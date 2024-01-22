#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
if (argc != 3)
{
return (1);
printf("Error\n");
}
int num1 = 0, num2 = 0;
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
(void)argc;
printf("%d\n", num1 *num2);
return (0);
}
