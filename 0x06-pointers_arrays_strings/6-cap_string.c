
/**
 * cap_string - Capitalizes the first letter of each word in a string.
 * @str: The input string.
 *
 * Description: This function takes a string as input and capitalizes
 * the first letter of each word in the string. Words are separated by
 * space, tab, or newline characters.
 *
 * Return: A pointer to the modified string.
 */
char *cap_string(char *str)
{
int i, capitalizeNxt = 1;

for (i = 0; str[i] != '\0'; i++)
{
if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
{
capitalizeNxt = 1;
}
else
{
if (capitalizeNxt)
{
if (str[i] >= 97 && str[i] <= 122)
{
str[i] = str[i] - 32;
}
capitalizeNxt = 0;
}
}
}

return (str);
}
