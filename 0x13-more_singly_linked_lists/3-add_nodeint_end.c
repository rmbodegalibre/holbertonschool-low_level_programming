#include "lists.h"
#include <stdio.h>
/**
 * add_nodeint_end - Add node at the end of the list
 * @head: pointer to the head of the list
 * @n: number of elements of the list
 * Return: Null if failed or address of head
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *last;

	last = *head;
	while (last && last->next != NULL)
		last = last->next;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
	*head = new;
	}
	return (new);
}
