#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list.
 * @head: pointer, set list to be freed
 */

void free_listint2(listint_t **head)
{
	listint_t *el;

	if (head == NULL)
		return;

	while (*head)
	{
		el = (*head)->next;
		free(*head);
		*head = el;
	}

	*head = NULL;
}
