#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * listint_len - program that returns the number of
 * elements in a linked listint_t list.
 * @h: this is header pointer
 *
 * Return: the num of elements.
 */
size_t listint_len(const listint_t *h)
{
	size_t z = 0;

	while (h != NULL)
	{
		h = h->next;
		z++;
	}
	return (z);
}
