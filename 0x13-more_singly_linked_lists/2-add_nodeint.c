#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a list_t list.
 * @head: A pointer to the pointer of the head of the list.
 * @n: The number to be and added to the list.
 * Return: The address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
