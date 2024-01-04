#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - Entry point of the program
 *
 * This function generates a random integer, evaluates its sign,
 * and prints a corresponding message to the standard output.
 * The random integer is obtained using the srand and rand functions,
 * and the time function is used to seed the random number generator.
 *
 * Return: Always returns 0 to indicate successful completion.
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
else if (n < 0)
{
printf("%d is negative\n", n);
}
return (0);
}
