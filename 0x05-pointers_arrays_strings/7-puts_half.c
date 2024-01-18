#include <stdio.h>
#include <string.h>
#include "main.h"

void puts_half(char *str)
{
int len = 0, i, start = 0;

while(str[len] != '\0')
{
len++;
}

start = (len + 1) / 2;

for (i = start; i < len; i++)
_putchar(str[i]);

_putchar('\n');
}  