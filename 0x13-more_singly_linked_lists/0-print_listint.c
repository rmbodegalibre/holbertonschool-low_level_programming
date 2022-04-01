#include "lists.h"
#include <stdio.h>
/**
 * print_listint - Prints all the elements of a listint list
 * @h: listint
 * Return: number  of nodes in h
 */

size_t print_listint(const listint_t *h)
{
	size_t idx = 0;

	while (h != NULL)
	{
	printf("%d\n", h->n);
	h = h->next;
	idx++;
	}
	return (idx);
}
