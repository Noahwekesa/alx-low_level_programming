#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * insert_nodeint_at_index - program that inserts
 * a new node at a given position
 * @head: the 1st node pointer on linked list
 * @idx: indicates the index when a new node is added
 * @n: the new node inserted
 *
 * Return: the address of the new node, or NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int z;
	listint_t *nn, *pt = *head;

	nn = malloc(sizeof(listint_t));
	if (!nn || !head)
		return (NULL);
	nn->n = n;
	nn->next = NULL;

	if (idx == 0)
	{
		nn->next = *head;
		*head = nn;
		return (nn);
	}

	for (z = 0; pt && z < idx; z++)
	{
		if (z == idx - 1)
		{
			nn->next = pt->next;
			pt->next = nn;
			return (nn);
		}
		else
			pt = pt->next;
	}
	return (NULL);
}
