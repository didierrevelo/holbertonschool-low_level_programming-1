#include "lists.h"
/**
 * print_listint - this function prints all the
 * elements of a listint_t list.
 * @h: pointer list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int runcount;

	if (h == NULL)
	return (0);

	for (runcount = 0; h != NULL; runcount++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (runcount);
}
