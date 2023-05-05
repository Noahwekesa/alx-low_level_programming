#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * reverse_listint - program that reverses,
 * a listint_t linked list
 * @head: indictes the ptr of the first
 * node in the linked list
 *
 * Return: a pointer to the first node in the new reversed
 * list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *bw = NULL;
	listint_t *fw = NULL;

	while (*head)
	{
		fw = (*head)->next;
		(*head)->next = bw;
		bw = *head;
		*head = fw;
	}

	*head = bw;

	return (*head);
}
