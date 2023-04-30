#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * delete_nodeint_at_index - program that deletes the node at
 * index index of a listint_t linked list.
 * @head: ptr to the first element in the linked list
 * @index: index of node in the linked list to be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *pt = *head;
	listint_t *exists = NULL;
	unsigned int z = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(pt);
		return (1);
	}

	while (z < index - 1)
	{
		if (!pt || !(pt->next))
			return (-1);
		pt = pt->next;
		z++;
	}


	exists = pt->next;
	pt->next = exists->next;
	free(exists);

	return (1);
}
