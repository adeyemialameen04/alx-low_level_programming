#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * of a listint_t linked list
 * @head: double pointer to the head of the list
 * @index: index of the node that should be deleted, starts at 0
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *nxt_node;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	temp = *head;

	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}

	while (i < index - 1)
	{
		if (temp == NULL)
			return (-1);

		temp = temp->next;
		i++;
	}

	if (temp == NULL || temp->next == NULL)
		return (-1);

	nxt_node = temp->next->next;
	free(temp->next);
	temp->next = nxt_node;

	return (1);
}
