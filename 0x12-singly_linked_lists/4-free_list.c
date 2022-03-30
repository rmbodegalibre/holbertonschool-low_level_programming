#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * free_list - frees a list_t list
 * @head: pointer to our linked list
 */
void free_list(list_t *head)
{
	list_t *new;
	list_t *cpr = head;


	while (cpr)
	{
	new = cpr->next;
	free(cpr->str);
	free(cpr);
	cpr = new;
	}
}
