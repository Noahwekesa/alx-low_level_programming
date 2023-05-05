#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint_safe - program that frees a listint_t list.
 * @h: ptr of the first node in a listint_t list.
 *
 * Return: ize of the list that was free'd.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	int opp;
	listint_t *tp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		opp = *h - (*h)->next;
		if (opp > 0)
		{
			tp = (*h)->next;
			free(*h);
			*h = tp;
			count++;
		}
		else
		{
			free(*h);
			*h = NULL;
			count++;
			break;
		}
	}

	*h = NULL;

	return (count);
}
