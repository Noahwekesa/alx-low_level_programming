#include "lists.h"

/**
 * get_dnodeint_at_index - program that Locates a 
 * node in a dlistint_t list.
 * @head: ead of the dlistint_t list.
 * @index: node to location.
 *
 * Return: NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
while (index > 0 && head != NULL)
{
    head = head->next;
    index--;
}

if (index == 0)
{
    return head;
}
else
{
    return NULL;
}
