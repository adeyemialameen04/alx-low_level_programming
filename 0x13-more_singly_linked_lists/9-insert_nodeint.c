#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to the head of the list
 * @idx: index of the node, starting at 0
 * @n: The int data
 * Return: nth node of a listint_t linked list or NULL if the node
 * does not exist
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *new_node;
	unsigned int i = 0;

	temp = *head;
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	while (i < idx - 1)
	{
		if (temp == NULL)
		{
			free(new_node);
			return (NULL);
		}

		temp = temp->next;
		i++;
	}

	new_node->next = temp->next;
	temp->next = new_node;

	return (new_node);
}
