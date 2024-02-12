#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - Removes the head node from a linked list.
 * @head: A pointer to the pointer of the head of the list.
 * Return: the data in the head node.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}

	temp = *head;
	data = temp->n;
	*head = (*head)->next;

	free(temp);
	return (data);
}
