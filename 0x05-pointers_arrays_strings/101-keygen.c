#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Generates and prints a random six-character password.
*
* This program initializes the random number generator with the current time
* and generates a random password consisting of uppercase letters
* ('A' to 'Z').
* The password is six characters long and is printed to the console.
*
* Return: Always 0 (Success)
*/
int main(void)
{
int password[64], i, sum = 0, n;

srand(time(NULL));
for (i = 0; i < 64; i++)
{
password[i] = rand() % 78;
sum+= password[i] + '0';
putchar(password[i] + '0');

if ((2772 - sum) - '0' < 78)
{
n = 2772 - sum - '0';
sum += n;
putchar(n + '0');
break;
}
}
return (0);
}
