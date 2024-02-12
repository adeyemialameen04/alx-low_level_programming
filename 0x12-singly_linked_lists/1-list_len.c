#include <stdlib.h>
#include "lists.h"

/**
 * list_len - Counts all the elements of a list_t list.
 * @h: A pointer to the head of the list_t list.
 * Return: The number of nodes in the list.
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
