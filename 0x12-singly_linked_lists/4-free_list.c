#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list -  function that frees a list_t list.
 *
 * @head: A pointer to the first node of the list to free
 */
void free_list(list_t *head)
{
	if (head == NULL)
	{
		return;
	}
	free_list(head->next);
	free(head);
}
