#include "main.h"
/**
 * string_toupper - Converts a string to uppercase.
 * @str: The string to be converted.
 *
 * Description: This function takes a string as input and converts all
 * lowercase letters to uppercase letters in the string.
 *
 * Return: A pointer to the modified string.
 */
char *string_toupper(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
if (str[i] >= 97 && str[i] <= 122)
{
str[i] = str[i] - 32;
}
}

return (str);
}
