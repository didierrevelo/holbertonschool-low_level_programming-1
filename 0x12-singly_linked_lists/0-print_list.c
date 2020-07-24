#include "lists.h"
/**
 * print_list - this function prints all elements of a list.
 * @h: it´s the values to prints
 * Return: the number of nodes.
 */
size_t print_list(const list_t *h)
{
	int a;

	if (h == NULL)
		return (0);

	for (a = 1; h->next != NULL; a++)
	{
		if (h->str == NULL)
			printf("[%u] %s\n", h->len, "(nil)");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
	}
	printf("[%u] %s\n", h->len, h->str);
	return (a);
}
