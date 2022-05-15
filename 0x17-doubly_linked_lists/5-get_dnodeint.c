#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: dlistint_t
 * @index: is the index of the node, starting from 0
 * Return: nth node of a dlistint_t. Or NULL if node doesn't exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int elems = 0;
	dlistint_t *aux = head;

	if (head)
		while (aux)
		{
			if (elems == index)
			{
				return (aux);
			}
			elems++;
			aux = aux->next;

		}
	return (0);
}
