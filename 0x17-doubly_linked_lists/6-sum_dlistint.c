#include "lists.h"

/**
 * sum_dlistint - Sums.
 * @head: Head pointer.
 * Return: @sum: value.
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *curr = head;
	int sum = 0;

	while (curr != NULL)
	{
		sum += curr->n;
		curr = curr->next;
	}

	return (sum);
}
