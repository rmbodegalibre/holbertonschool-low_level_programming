#include "lists.h"
#include <stdio.h>
/**
 * pop_listint - deletes the head node of a linked list
 * listint_t - type of node
 * @head: pointer to the head of the list
 * Return: Nothing
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
	return;
	while (*head)
	{
	temp = (*head)->next;
	free(*head);
	*head = temp;
	}
}
