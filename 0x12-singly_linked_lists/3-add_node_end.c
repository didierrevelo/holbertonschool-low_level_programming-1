#include "lists.h"
/**
 * add_node_end - this function add a new node to list
 * @head: pointer to the head of th list
 * @str: string to print
 * Return: addres of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *tem = *head;
	int c = 0;

	new = malloc(sizeof(list_t));
	if (new)
	{
		new->str = strdup(str);
		if (str)
		{
			while (new->str[c])
				c++;
		}
		new->next = NULL;
		new->len = c;
		if (!*head)
		{
			*head = new;
			return (*head);
		}
		while (tem->next)
			tem = tem->next;
		tem->next = new;
		return (new);
	}
	return (NULL);
}
