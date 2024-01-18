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
int i;
char password[7];

/* Initialize random number generator */
srand((unsigned int) time(NULL));

/* Generate a random six-character password */
for (i = 0; i < 6; i++)
{
password[i] = 'A' + (rand() % 26);
}

password[6] = '\0';

printf("%s\n", password);

return (0);
}
