#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - deletes the head node of the linked list
 * @head: head of the list
 * @inx: index at node
 * @n: value of data at an index
 *
 * Return: returns node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int node = 0;
	listint_t *temp, *new;
	
	new = malloc(sizeof(listint_t));
		if (new == NULL)
		return (NULL);
	if (idx == node)
		{
		(*head)->n = n;
		return (*head);
		}
	while ((*head)->next != NULL)
		{
		node++;
		*head = (*head)->next;
		if (idx == node)
		{
			temp = (*head)->next;
			(*head)->next = new;
			new->n = n;
			new->next = temp;
			return (new);
		}
		}
	return (NULL);
}
