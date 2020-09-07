#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a
 * dlistint_t doblelinked list.
 * @head: it's a pointer to value
 * @index: is the index of the node
 * Return: if the node does not exist, return NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count;

	for (count = 0; count < index; count++)
	{
		if (head == NULL)
		return (NULL);
		head = head->next;
	}
	return (head);
}
