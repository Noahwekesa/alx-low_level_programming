#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at
 * the end of a listint_t list.
 * @head: the pointer to the 1st element in the list
 * @n: insert in the new element
 * Return: the address of the new element,
 * or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nn;
	listint_t *tp = *head;

	nn = malloc(sizeof(listint_t));
	if (!nn)
		return (NULL);

	nn->n = n;
	nn->next = NULL;

	if (*head == NULL)
	{
		*head = nn;
		return (nn);
	}

	while (tp->next)
		tp = tp->next;

	tp->next = nn;

	return (nn);
}
