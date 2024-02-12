#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a list_t list.
 * @head: A pointer to the pointer of the head of the list.
 * @n: The string to be duplicated and added to the list.
 * Return: The address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end, *last;

	if (head == NULL)
		return (NULL);

	end = malloc(sizeof(listint_t));
	if (end == NULL)
		return (NULL);

	end->n = n;
	end->next = NULL;

	if (*head == NULL)
		*head = end;
	else
	{
		last = *head;
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = end;
	}

	return (end);
}
