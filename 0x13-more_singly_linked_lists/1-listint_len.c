#include "lists.h"
#include <stdio.h>
/**
 * listint_len - Save account elements of the list
 * @h: listint_len
 * Return: number  of nodes in h
 */

size_t listint_len(const listint_t *h)
{
	size_t idx = 0;

	while (h != NULL)
	{
	h = h->next;
	idx++;
	}
	return (idx);
}
