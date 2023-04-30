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
	unsigned int z;
	listint_t *pt, *nn;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		nn = (*head)->nn;
		free(*head);
		*head = nn;
		return (1);
	}
	pt = *head;
	for (z = 0; z < index - 1; z++)
	{
		if (pt->nn == NULL)
			return (-1);
		pt = pt->nn;
	}
	nn = pt->nn;
	pt->nn = nn->nn;
	free(nn);
	return (1);
}

