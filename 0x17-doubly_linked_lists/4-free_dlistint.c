#include <stdio.h>
#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list.
 * @head: Address Node
 * Return: new node
 */

void free_dlistint(dlistint_t *head)

{
	dlistint_t *aux;

	while (head)
	{
		aux = head->next;
		free(head);
		head = aux;
	}
}
