#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index index of a dlistint_t
 * @head: pointer to head of node
 * @index: position of item that will be deleted, starts at 0
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int pos = 0;
	dlistint_t *aux;

	if (!(*head))
		return (-1);
	aux = *head;
	if (*head)
	{
		while (aux)
		{
			if (pos == index)
			{
				if (index)
					(aux->prev)->next = aux->next;
				else
					*head = aux->next;
				if (aux->next)
					(aux->next)->prev = aux->prev;
				free(aux);
				return (1);
			}
			pos++;
			aux = aux->next;
		}
	}
	return (-1);
}
