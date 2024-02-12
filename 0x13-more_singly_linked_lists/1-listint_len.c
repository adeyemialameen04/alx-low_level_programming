#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - Lists all the elements of a list_t list.
 * @h: A pointer to the head of the list_t list.
 * Return: The number of nodes in the list.
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != 0)
	{
		h = h->next;
		count++;
	}

	return (count);
}
