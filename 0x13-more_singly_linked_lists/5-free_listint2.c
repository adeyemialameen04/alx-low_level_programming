#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - Frees a list_t list and assign null to head.
 * @head: A pointer to the pointer of the head of the list.
 */
void free_listint2(listint_t **head)
{
	listint_t *curr, *nxt;

	if (*head == NULL)
		return;

	curr = *head;

	while (curr != NULL)
	{
		nxt = curr->next;
		free(curr);
		curr = nxt;
	}

	*head = NULL;
}
