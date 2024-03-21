#include "lists.h"

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *curr;

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}

	curr = *head;

	while (curr->next != NULL)
	{
		curr = curr->next;
	}

	new_node->prev = curr;
	curr->next = new_node;

	return (new_node);
}
