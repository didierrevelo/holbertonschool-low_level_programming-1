#include "lists.h"
/**
 * list_len - this function return the numbers of elements of a list.
 * @h: it´s the values to prints
 * Return: the number of nodes.
 */
size_t list_len(const list_t *h)
{
	int a;

	if (h == NULL)
		return (0);

	for (a = 1; h->next != NULL; a++)
		h = h->next;
	return (a);
}
