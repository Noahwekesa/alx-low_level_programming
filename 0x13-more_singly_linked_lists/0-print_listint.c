#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - progam that prints all the elements of
 * a listint_t list.
 * @h: the linked list type listint_t to print
 * Return: the num of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t z = 0;

	while (h)
	{
		printf("%d\n", h->n);
		z++;
		h = h->next;
	}
	return (z);
}
