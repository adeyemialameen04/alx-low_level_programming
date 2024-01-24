#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point of the program.
* @argc: Number of arguments.
* @argv: Array of arguments.
*
* Return: Always 0 (success).
*/
int main(int argc, char *argv[])
{
int bytes, i;

if (argc != 2)
{
printf("Error\n");
exit(1);
}

bytes = atoi(argv[1]);

if (bytes < 0)
{
printf("Error\n");
exit(2);
}

for (i = 0; i < bytes; i++)
{
printf("%02x", *((unsigned char *)main + i));
if (i < bytes - 1)
printf(" ");
}

printf("\n");

return (0);
}
