#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - Prints the number of elements in a linked dlistint_t list
 * @h: dlistint_t
 * Return: number of elements in h
 */

size_t dlistint_len(const dlistint_t *h)
{
	int elems = 0;

	while (h != NULL)
	{
	h = h->next;
	elems++;
	}
	return (elems);
}
