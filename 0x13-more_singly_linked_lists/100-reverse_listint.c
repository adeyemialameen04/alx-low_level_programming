#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t linked list
 * @head: Pointer to the head of the linked list
 *
 * Return: Pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prv_node = NULL, *nxt_node;

	while (*head != NULL)
	{
		nxt_node = (*head)->next;
		(*head)->next = prv_node;
		prv_node = *head;
		*head = nxt_node;
	}

	*head = prv_node;

	return (*head);
}
