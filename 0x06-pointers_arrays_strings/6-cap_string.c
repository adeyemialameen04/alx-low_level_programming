/**
 * cap_string - Capitalizes the first letter of each word in a string.
 * @str: The input string.
 *
 * Description: This function takes a string as input and capitalizes
 * the first letter of each word in the string. Words are separated by
 * space, tab, newline, comma, semicolon, period, exclamation mark,
 * question mark, double quote, open parenthesis, close parenthesis,
 * open curly brace, or close curly brace characters.
 *
 * Return: A pointer to the modified string.
 */
char *cap_string(char *str)
{
	int i;
	int capitalizeNext = 1;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == ',' ||
			str[i] == ';' || str[i] == '.' || str[i] == '!' ||
			str[i] == '?' || str[i] == '"' || str[i] == '(' ||
			str[i] == ')' || str[i] == '{' || str[i] == '}')
		{
			capitalizeNext = 1;
		}
		else
		{
			if (capitalizeNext && (str[i] >= 'a' && str[i] <= 'z'))
			{
				str[i] = str[i] - ('a' - 'A');
			}
			capitalizeNext = (str[i] == '\n' || str[i] == '\0') ? 1 : 0;
		}
	}

	return (str);
}
