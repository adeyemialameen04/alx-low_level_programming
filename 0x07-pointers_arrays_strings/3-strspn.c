#include <stdio.h>

/**
* _strspn - Calculates the length of the initial segment of s
*            consisting of only the characters in accept.
*
* @s: The string to be checked.
* @accept: The string containing the characters to match.
*
* Return: The length of the initial segment of s consisting
*         entirely of characters from accept.
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int len = 0;
int found;

while (*s != '\0')
{
found = 0;

for (int i = 0; accept[i] != '\0'; i++)
{
if (*s == accept[i])
{
found = 1;
break;
}
}

if (found)
{
len++;
}
else
{
break;
}

s++;
}

return (len);
}
