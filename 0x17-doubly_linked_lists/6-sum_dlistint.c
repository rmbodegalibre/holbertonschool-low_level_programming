#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint - sum of all the data (n) of a dlistint_t linked list.
 * @head: Pointer at node location
 * Return: result
 */

int sum_dlistint(dlistint_t *head)
{
	int result = 0;

	while (head != NULL)
	{
	result += head->n;
	head = head->next;
	}
	return (result);
}
