#include <stdio.h>

/**
 * leet - function that encodes a string into 1337..
 * @str: The string to be read.
 *
 * Description: This function takes a string as input and converts some
 * char to numbers.
 * Letters a and A should be replaced by 4
 * Letters e and E should be replaced by 3
 * Letters o and O should be replaced by 0
 * Letters t and T should be replaced by 7
 * Letters l and L should be replaced by 1
 *
 * Return: A pointer to the modified string.
 */
char *leet(char *str)
{
int count = 0, i;
int lowercase[] = {97, 101, 111, 116, 108};
int uppercase[] = {65, 69, 79, 84, 76};
int num[] = {52, 51, 48, 55, 49};

while (*(str + count) != '\0')
{
for (i = 0; i < 5; i++)
{
if (*(str + count) == lowercase[i] || *(str + count) == uppercase[i])
{
*(str + count) = num[i];
break;
}
}
count++;
}

return (str);
}
