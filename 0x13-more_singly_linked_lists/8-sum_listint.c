#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_listint- To calculate the sum of all the data (n) of a
 *					listint_t linked list
 * @head: A pointer to the head of the list_t list.
 * Return: The sum of all the n in the list.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
