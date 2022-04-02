#include "lists.h"
#include <stdio.h>
/**
 * free_listint - frees a listint list
 * listint_t - type of node
 * @head: pointer to the head of the list
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
	temp = head;
	head = head->next;
	free(temp);
	}
}
