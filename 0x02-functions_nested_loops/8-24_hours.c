#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - Prints every minute of a 24-hour day.
 *
 * Description: This function prints every minute of a 24-hour day
 * in the format HH:MM, separated by commas and ending with a newline.
 * Hours and minutes are printed with leading zeros for single digits.
 */
void jack_bauer(void)
{
int minutes, hours;

for (hours = 0; hours <= 23; hours++)
{
for (minutes = 0; minutes <= 59; minutes++)
{
printf("%02d:%02d\n", hours, minutes);
}
}
}
