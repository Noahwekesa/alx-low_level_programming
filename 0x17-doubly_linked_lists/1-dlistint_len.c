#include "lists.h"

/**
 * dlistint_len - program that returns the number of elements in a linked dlistint_t list.
 * @h: The double linked list to count
 * 
 * Return: Num of the elmn in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
    int lngth = 0;

    while (h !=NULL)
    {
        ++lngth;
        h = h->next;
    }

    return (lngth);
}