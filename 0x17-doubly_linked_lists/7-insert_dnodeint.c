/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: dlistint_t
 * @idx: Index
 * @n: number contained in node
 * Return: address of the new node, or NULL if it failed
 */


dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	int pos = 0;

	while (h != NULL)
	{
	
	printf("%d\n", h->n);
	h = h->next;
	elems++;
	}
	return (elems);
}
