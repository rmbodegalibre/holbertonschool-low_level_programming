#include "lists.h"
#include <stdio.h>
/**
 * free_listint2 - frees a listint list
 * listint_t - type of node
 * @head: pointer to the head of the list
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head != NULL)
	{
	temp = *head;
	*head = *head->next;
	free(*head);
	}
}
