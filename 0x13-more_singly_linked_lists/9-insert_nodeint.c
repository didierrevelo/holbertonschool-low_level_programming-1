#include "lists.h"
/**
 *  - thid function inserts a new node at a given position.
 * @head: pointer that apoint to de head 
 * @idx: index
 * @n: variable
 * Returns: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int runner;
	listint_t *new, *temp;

	new = (listint_t *) malloc(sizeof(listint_t));
	if (new == NULL)
	return (NULL);
	else
	{
		new->n = n;
		new->next = NULL;
		temp = *head;
		if (head == NULL)
		return (NULL);
		for (runner = 0; runner <= idx - 1; runner++)
		{
			temp = temp->next;
			if (temp == NULL)
			return (NULL);			
		}
		if (temp != NULL)
		{
			new->next = temp->next;
			temp->next = new;
		}
		return (new);

	}


}