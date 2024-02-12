#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list safely
 * @head: Pointer to the head of the linked list
 *
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tortoise, *hare;
	size_t count = 0;

	if (head == NULL)
		exit(98);

	tortoise = head;
	hare = head;

	while (hare != NULL && hare->next != NULL)
	{
		printf("[%p] %d\n", (void *)tortoise, tortoise->n);
		tortoise = tortoise->next;
		hare = hare->next->next;
		count++;

		if (tortoise == hare)
		{
			printf("-> [%p] %d\n", (void *)tortoise, tortoise->n);
			break;
		}
	}

	return (count);
}
