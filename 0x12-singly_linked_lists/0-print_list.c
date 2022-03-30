#include "lists.h"
#include <stdio.h>
/**
 * print_list - Prints all the elements of a list_t list
 * @h: list_t
 * Return: number of nodes in h
 */
size_t print_list(const list_t *h)
{
	const list_t *cur;
	size_t x;

	x = 0;

	cur = h;
	while (cur != NULL)
	{
	if (!cur->str)
	printf("[%d] %s\n", 0, "(nil)");
	else
	printf("[%d] %s\n", cur->len, cur->str);
	cur = cur->next;
	x++;
	}
	return (x);
}
