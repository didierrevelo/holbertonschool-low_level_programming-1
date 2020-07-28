#include "lists.h"
/**
 * free_listint2 - this function free a list_t list
 * @head: values
 */
void free_listint2(listint_t **head)
{
	listint_t *tem;

	if (head == NULL)
		return;
	while ((*head)->next != NULL)
	{
		tem = (*head)->next;
		free(*head);
		*head = tem;
	}
	free(*head);
	*head = NULL;
}
