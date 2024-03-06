#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * count_words - Counts the number of words in a string.
 * @str: The input string.
 * Return: The number of words.
 */
int count_words(char *str)
{
	int i, count = 0;
	int in_word = 0; /*Flag to track if we are inside a word*/

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
			in_word = 0; /*Not inside a word*/
		else if (!in_word)
		{
			in_word = 1; /*Inside a word*/
			count++;
		}
	}
	return (count);
}

/**
 * strtow - Splits a string into words.
 * @str: The input string.
 *
 * Return: A pointer to an array of strings (words), or NULL if it fails.
 */
char **strtow(char *str)
{
	int i, j, k, len, word_count;
	char **words;

	if (str == NULL || *str == '\0')
		return (NULL);

	word_count = count_words(str);
	words = malloc(sizeof(char *) * (word_count + 1)); /*+1 for NULL terminator*/
	if (words == NULL)
		return (NULL);

	for (i = 0, j = 0; i < word_count; i++)
	{
		while (str[j] == ' ')
			j++; /*Skip leading spaces*/

		len = 0;
		while (str[j + len] != ' ' && str[j + len] != '\0')
			len++; /*Calculate word length*/

		words[i] = malloc(sizeof(char) * (len + 1));
		if (words[i] == NULL)
		{
			for (k = 0; k < i; k++)
				free(words[k]);
			free(words);
			return (NULL);
		}

		strncpy(words[i], str + j, len); /*Copy word*/
		words[i][len] = '\0';			 /*Null-terminate the word*/
		j += len;
	}
	words[word_count] = NULL; /*Set the last element to NULL*/

	return (words);
}
