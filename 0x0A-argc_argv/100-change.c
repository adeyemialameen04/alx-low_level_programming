#include <stdio.h>
#include <stdlib.h>

/**
* main - prints the minimum number of coins to make change for an amount
* @argc: the number of arguments
* @argv: an array of arguments
*
* Return: 0 on success, 1 on error
*/
int main(int argc, char *argv[])
{
int cents;
int coins[] = {25, 10, 5, 2, 1};
int numCoins = 0;
int i;

if (argc != 2)
{
printf("Error\n");
return (1);
}

cents = atoi(argv[1]);

if (cents < 0)
{
printf("0\n");
return (0);
}

for (i = 0; i < 5; i++)
{
while (cents >= coins[i])
{
cents -= coins[i];
numCoins++;
}
}

printf("%d\n", numCoins);
return (0);
}
