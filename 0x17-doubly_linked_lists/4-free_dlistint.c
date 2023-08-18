#include "lists.h"

/**
 * free_dlistint - program that frees a linked dlistint_t list.
 * @head: ead of the dlistint_t list.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *currentNode;

	while (head)
	{
		currentNode = head->next;
		free(head);
		head = currentNode;
	}
}