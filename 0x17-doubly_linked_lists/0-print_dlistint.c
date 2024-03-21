#include "lists.h"

/**
 * print_dlistint - Function to print the ints in a linked list.
 * @h: Pointer to the head node.
 * Return: Count.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
