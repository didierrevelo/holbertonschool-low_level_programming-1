#include "lists.h"
/**
 * add_node - this function add a new node to list
 * @head: pointer to the head of th list
 * @str: string to print
 * Return: addres of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int c = 0;

	if (head == NULL)
		return (NULL);
	new = (list_t *) malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	if (*head == NULL)
		new->next = NULL;
	else
		new->next = *head;
	new->str = strdup(str);
	if (str)
	{
		while (str[c] != '\0')
			c++;
	}
	new->len = c;
	*head = new;
	return (*head);
}
