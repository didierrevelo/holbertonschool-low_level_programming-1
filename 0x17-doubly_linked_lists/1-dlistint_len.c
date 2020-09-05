#include "lists.h"
/**
 * dlistint_len - this function return the numbers of elements of a list.
 * @h: it´s the values to prints.
 * Return: the number of nodes.
 */
size_t dlistint_len(const dlistint_t *h)
{
	int a;

	if (h == NULL)
		return (0);

	for (a = 0; h != NULL; a++)
		h = h->next;
	return (a);
}
