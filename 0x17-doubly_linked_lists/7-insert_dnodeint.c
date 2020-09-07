#include "lists.h"
/**
 * insert_dnodeint_at_index - thid function inserts
 * a new node at a given position.
 * @h: pointer that apoint to de h
 * @idx: index
 * @n: variable
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int runner;
	dlistint_t *new, *temp;

	new = (dlistint_t *) malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	temp = *h;
	if (idx == 0)
	{
		if (*h == NULL)
			*h = new;
		else
		{
			new->next = temp;
			temp->prev = new;
			*h = new;
		}
		return (new);
	}
	for (runner = 0; temp->next != NULL || runner == idx - 1; runner++)
	{
		if (runner + 1 == idx)
		{
			if (temp->next != NULL)
				temp->next->prev = new;
			new->next = temp->next;
			temp->next = new;
			new->prev = temp;
			return (new);
		}
		temp = temp->next;
	}
	free(new);
	return (NULL);
}
