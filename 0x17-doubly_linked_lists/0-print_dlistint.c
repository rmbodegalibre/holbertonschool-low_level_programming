#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a dlistint_t list
 * @h: dlistint_t
 * Return: number  of nodes in h
 */
size_t print_dlistint(const dlistint_t *h)
{
	int elems = 0;

	while (h != NULL)
	{
	printf("%d\n", h->n);
	h = h->next;
	elems++;
	}
	return (elems);
}
