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
if (argc != 2)
{
printf("Error\n");
return (1);
}

int cents = atoi(argv[1]);

if (cents < 0)
{
printf("0\n");
return (0);
}

int coins[] = {25, 10, 5, 2, 1};
int num_coins = sizeof(coins) / sizeof(coins[0]);
int count = 0;

for (int i = 0; i < num_coins; i++)
{
while (cents >= coins[i])
{
cents -= coins[i];
count++;
}
}

printf("%d\n", count);
return (0);
}
