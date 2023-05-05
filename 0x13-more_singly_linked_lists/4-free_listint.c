#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint - program that frees a listint_t list.
 * @head: the function list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *n;

	while (head)
	{
		n = head->next;
		free(head);
		head = n;
	}
}
