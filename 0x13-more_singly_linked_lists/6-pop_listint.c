#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - program that deletes the head node of
 * a lisint_t linked list.
 * @head: ptr to the 1st element in the linked list
 *
 * Return: the head node's data (n)
 * if the linked list is empty return 0
 */
int pop_listint(listint_t **head)
{
	listint_t *nn;
	int z;

	if (!head || !*head)
		return (0);

	z = (*head)->n;
	nn = (*head)->next;
	free(*head);
	*head = nn;

	return (z);
}
