#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_nodeint_at_index - program that returns the nth node of
 * a listint_t linked list
 * @head: pointer of the 1st node
 * in the linked list
 * @index: this indicates index of the node to return
 *
 * Return: if the node does nt exist, return 0
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int z = 0;
	listint_t *nn = head;

	while (nn && z < index)
	{
		nn = nn->next;
		z++;
	}

	return (nn ? nn : NULL);
}

