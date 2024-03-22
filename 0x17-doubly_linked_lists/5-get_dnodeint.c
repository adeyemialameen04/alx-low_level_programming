#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the node at the index in a linked list.
 * @head: Pointer to the head of the list.
 * @index: Index of the node to return.
 * Return: Pointer to the node at the specified index, or
 * NULL if the index is out of range.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *curr = head;
	unsigned int i = 0;

	while (curr != NULL && i < index)
	{
		curr = curr->next;
		i++;
	}

	if (i != index)
		return (NULL);

	return (curr);
}
