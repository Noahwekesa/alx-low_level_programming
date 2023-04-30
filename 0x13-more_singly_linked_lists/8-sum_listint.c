#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * sum_listint - program that returns the sum of all the data(n)
 * of a listint_t linked list
 * @head: node of the first element in the linked list
 *
 * Return: return 0 only when the linked list is empty.
 */
int sum_listint(listint_t *head)
{
	int sm = 0;

	while (head != NULL)
	{
		sm += head->n;
		head = head->next;
	}
	return (sm);
}
