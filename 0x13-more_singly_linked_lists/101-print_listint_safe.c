#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

size_t loop_listint_fun(const listint_t *head);

/**
 * loop_listint_fun - program that rellocates nodes
 * in a looped listint_t linked list.
 * @head: A ptr to the head of the listint_t list.
 *
 * Return: 0 Always.or the no. of unique nodes in the list.
 */
size_t loop_listint_fun(const listint_t *head)
{
	const listint_t *z, *e;
	size_t ndes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	z = head->next;
	e = (head->next)->next;

	while (e)
	{
		if (z == e)
		{
			z = head;
			while (z != e)
			{
				ndes++;
				z = z->next;
				e = e->next;
			}

			z = z->next;
			while (z != e)
			{
				ndes++;
				z = z->next;
			}

			return (ndes);
		}

		z = z->next;
		e = (e->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - program that prints a listint_t linked list.
 * @head: a pointer to the head of the function
 *
 * Return: the no. of nodes in a list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nn, indx = 0; 
	
	nn = loop_listint_fun(head);

	if (nn == 0)
	{
		for (; head != NULL; nn++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (indx = 0; indx < nn; indx++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nn);
}
