#include <stdio.h>
#include <string.h>
#include "main.h"

void puts_half(char *str)
{
int len, i;
len = strlen(str);
for (i = 0; i < len / 2; i++)
{
printf("%d\n", str[i]);
}
}