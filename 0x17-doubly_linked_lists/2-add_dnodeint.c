#include "lists.h"

/**
 * add_dnodeint - program that adds a new node at the beginning of a dlistint_t list.
 * @head: pointer to the head of thedlistint_t list.
 * @n: int for the new node to contain.
 *
 * Return:  the address of the new element, 
 * or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_nod;

	new_nod = malloc(sizeof(dlistint_t));
	if (new_nod == NULL)
		return (NULL);

	new_nod->n = n;
	new_nod->prev = NULL;
	new_nod->next = *head;
	if (*head != NULL)
		(*head)->prev = new_nod;
	*head = new_nod;

	return (new_nod);
}