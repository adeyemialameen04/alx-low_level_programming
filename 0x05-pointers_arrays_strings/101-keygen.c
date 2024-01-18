#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates and prints a random string of lowercase letters.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
char str[16];
srand(time(NULL));
for (i = 0; i < 15; i++)
str[i] = rand() % (122 - 97 + 1) + 97;
str[15] = 0;
printf("%s\n", str);

return (0);
}
