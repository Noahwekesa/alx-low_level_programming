#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * find_listint_loop - program that finds the loop in a linked list.
 * @head: ptr linked list to search for nodes in arry
 *
 * Return: the address of the node, where the loop starts.
 * or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *z = head;
	listint_t *x = head;

	if (!head)
		return (NULL);

	while (z && x && x->next)
	{
		x = x->next->next;
		z = z->next;
		if (x == z)
		{
			z = head;
			while (z != x)
			{
				z = z->next;
				x = x->next;
			}
			return (x);
		}
	}

	return (NULL);
}
