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
int i = 0, sum = 0;
if (argc == 1)
{
printf("0\n");
return (0);
}
for (; i < argc; i++)
{
sum = sum + atoi(argv[i]);
}
printf("%d\n", sum);
return (0);
}
