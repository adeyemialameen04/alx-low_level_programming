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
int i;
for (i = 0; str[i] != '\0'; i++)
{
if (str[i] == 'a' || str[i] == 'A')
str[i] = '4';
else if (str[i] == 'e' || str[i] == 'E')
str[i] = '3';
else if (str[i] == 'o' || str[i] == 'O')
str[i] = '0';
else if (str[i] == 't' || str[i] == 'T')
str[i] = '7';
else if (str[i] == 'l' || str[i] == 'L')
str[i] = '1';
else
str[i] = str[i];
}
return (str);
}
