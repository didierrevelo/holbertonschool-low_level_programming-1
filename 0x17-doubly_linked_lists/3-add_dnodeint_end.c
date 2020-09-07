#include "lists.h"
/**
 * add_dnodeint_end - this function add a new node to doble linked list
 * @head: pointer to the head of th list
 * @n: number of return
 * Return: addres of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *tem = *head;

	new = malloc(sizeof(dlistint_t));
	if (new)
	{
		new->prev = NULL;
		new->n = n;
		if (!*head)
		{
			new->next = NULL;
			*head = new;
			return (new);
		}
		while (tem->next)
			tem = tem->next;
		tem->next = new;
		new->prev = tem;
		return (new);
	}
	return (NULL);
}
