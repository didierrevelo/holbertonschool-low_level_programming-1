#include "lists.h"
/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: pointer
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int a;

	if (h == NULL)
		return (0);

	for (a = 0; h != NULL; a++)
	{
		printf("%i\n", h->n);
		h = h->next;
	}
	return (a);
}
