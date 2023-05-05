#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint - function that adds a new node at
 * the beginning of a listint_t list.
 * @head: pointer that points the first node
 * @n: the element to insert in the new node
 *
 * Return: the addrss of the new element,
 * or null if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nn;

	if (head == NULL)
		return (NULL);
	nn = malloc(sizeof(listint_t));
	if (nn == NULL)
		return (NULL);
	nn->n = n;
	nn->next = *head;
	*head = nn;
	return (nn);
}
