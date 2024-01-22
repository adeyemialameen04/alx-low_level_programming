#include <stdlib.h>
#include <stdio.h>

/**
 * main - Multiplies two numbers passed as command-line arguments.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 *
 * Return: 0 on success, 1 on incorrect number of arguments.
 */
int main(int argc, char *argv[])
{
unsigned long long num1 = 0, num2 = 0, mul = 0;
if (argc != 3)
{
return (1);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
mul = num1 *num2;
printf("%lld\n", mul);
return (0);
}
