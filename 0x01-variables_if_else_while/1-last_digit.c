#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */


/**
 * main - Entry point of the program
 *
 * This program generates a random number, prints the last digit of the number,
 * and provides information about the last digit according to the specified conditions.
 *
 * Return: Always returns 0 to indicate successful completion.
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
    
int lastDigit = n % 10;
if (lastDigit > 5)
        printf("Last digit of %d is %d and is greater than 5", n,lastDigit);
else if (lastDigit == 0)
        printf("Last digit of %d is %d and is 0", n,lastDigit);
else if (lastDigit < 6 && lastDigit != 0)
        printf("Last digit of %d is %d and is less than 6 and not 0", n,lastDigit);
	/* your code goes there */
	return (0);
}