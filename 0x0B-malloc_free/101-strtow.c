#include <stdio.h>
#include <stdlib.h>

/**
 * strtow - Splits a string into words.
 * @str: The input string.
 * Return: Pointer to an array of strings (words), or NULL on failure.
 */
char **strtow(char *str);
char **strtow(char *str)
{
	int i, j, k, count = 0, word_len = 0;
	char **words;

	if (str == NULL || *str == '\0')
		return (NULL);

	/*Count the number of words in the string*/
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
			count++;
	}

	/*Allocate memory for the array of words*/
	words = malloc(sizeof(char *) * (count + 1));

	/*Check for memory allocation failure*/
	if (words == NULL)
		return (NULL);

	/*Iterate through the string to extract words*/
	for (i = 0, k = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
		{
			/*Count characters in the current word*/
			for (j = i; str[j] != ' ' && str[j] != '\0'; j++)
				word_len++;

			/*Allocate memory for the current word*/
			words[k] = malloc(sizeof(char) * (word_len + 1));

			/*Check for memory allocation failure*/
			if (words[k] == NULL)
			{
				/*Free previously allocated memory and return NULL*/
				for (j = 0; j < k; j++)
					free(words[j]);
				free(words);
				return (NULL);
			}

			/*Copy the word to the array*/
			for (j = 0; j < word_len; j++)
				words[k][j] = str[i + j];
			words[k][word_len] = '\0';

			k++;		   /*Move to the next word*/
			i += word_len; /*Skip the current word in the original string*/
			word_len = 0;  /*Reset word length for the next iteration*/
		}
	}

	words[k] = NULL; /*Set the last element of the array to NULL*/

	return (words);
}
