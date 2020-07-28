#include "lists.h"
/**
 * add_nodeint_end - this function add a new node to list
 * @head: pointer to the head of th list
 * @n: number of return
 * Return: addres of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *tem = *head;

	new = malloc(sizeof(listint_t));
	if (new)
	{
		new->next = NULL;
		new->n = n;
		if (!*head)
		{
			*head = new;
			return (new);
		}
		while (tem->next)
			tem = tem->next;
		tem->next = new;
		return (new);
	}
	return (NULL);
}
