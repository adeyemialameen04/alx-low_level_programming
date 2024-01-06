#include <stdio.h>
#include "main.h"

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

    // putchar('\n');
}
