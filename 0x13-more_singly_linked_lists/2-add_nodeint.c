#include "lists.h"
#include <stdio.h>
/**
 * add_nodeint - Add node at init of the list
 * @head: pointer to the head of the list
 * @n: number of elements of the list
 * Return: node added
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp;

	temp = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	return (NULL);
	new->n = n;
	*head = new;
	if (temp == NULL)
	new->next = NULL;
	else
		new->next = temp;
	return (new);
}
