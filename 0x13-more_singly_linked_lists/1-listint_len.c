#include "lists.h"
/**
 * listint_len - this function return the numbers of elements of a list.
 * @h: it´s the values to prints
 * Return: the number of nodes.
 */
size_t listint_len(const listint_t *h)
{
	int runcount = 1;

	if (h == NULL)
		return (0);

	while (h->next != NULL)
		h = h->next;
		runcount++;
	return (runcount);
}
