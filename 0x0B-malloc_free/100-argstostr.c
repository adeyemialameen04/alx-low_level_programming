#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - Function to concat all args to str.
 * @ac: Argc count.
 * @av: Arg vector.
 * Return: Ponter to the new str or NUll.
 */
char *argstostr(int ac, char **av)
{
	int i, j, len = 0, total_len = 0;

	char *new_str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;

		total_len += len + 1;

		len = 0;
	}

	new_str = malloc(sizeof(char) * total_len);

	if (new_str == NULL)
		return (NULL);

	len = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			new_str[len++] = av[i][j];

		new_str[len++] = '\n';
	}

	new_str[len] = '\0';

	return (new_str);
}
