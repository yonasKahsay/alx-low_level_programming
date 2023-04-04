#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - deletes the head node of the linked list
 * @head: head of the list
 * @index: index at node
 *
 * Return: returns node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node = 0;

	if (index == node)
		return (head);
	while (head->next != NULL)
		{
		node++;
		head = head->next;
		if (index == node)
			return (head);
		}
	return (NULL);
}
