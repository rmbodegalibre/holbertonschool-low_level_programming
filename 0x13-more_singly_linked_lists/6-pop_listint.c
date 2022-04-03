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
	int tempdata;

	if (*head == NULL)
	return (0);

	tempdata = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (tempdata);
}
