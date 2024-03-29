#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - deletes the head node of the linked list
 * @head: head of the list
 * @idx: index at node
 * @n: value of data at an index
 *
 * Return: returns node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int node = 0;
	listint_t *temp = *head, *new, *temp2;

	new = malloc(sizeof(listint_t));
		if (new == NULL || head == NULL)
		return (NULL);
	if (idx == node)
		{
		new->next = *head;
		new->n = n;
		*head = new;
		return (new);
		}
		node = 1;
	while (temp->next != NULL)
		{
		if (idx == node)
		{
			temp2 = temp->next;
			temp->next = new;
			new->n = n;
			new->next = temp2;
			return (new);
		}
		temp = temp->next;
		node++;
		}
		if (temp->next == NULL && idx == node)
			{
			temp2 = temp->next;
			temp->next = new;
			new->n = n;
			new->next = temp2;
			return (new);
			}
	return (NULL);
}
