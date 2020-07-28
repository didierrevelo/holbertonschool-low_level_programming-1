#include "lists.h"
/**
 * add_nodeint - this function add a new node to list
 * @head: pointer to the head of th list
 * @n: number of return
 * Return: addres of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head == NULL)
	return (NULL);

	new = (listint_t *) malloc(sizeof(listint_t));
	if (new == NULL)
	return (NULL);
	if (*head == NULL)
	new->next = NULL;
	else
	new->next = *head;
	new->n = n;
	*head = new;
	return (*head);
}
