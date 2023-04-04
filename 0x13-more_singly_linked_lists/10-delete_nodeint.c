#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the head node of the linked list
 * @head: head of the list
 * @index: index at node
 *
 * Return: returns node
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int node = 0;
	listint_t *temp = *head, *temp2;

		if (*head == NULL)
		return (-1);
	if (index == node)
		{
		*head = (*head)->next;
		free(temp);
		return (1);
		}
		node = 1;
	while (temp->next != NULL)
		{
		if (index == node)
		{
			temp2 = temp->next;
			temp->next = temp2->next;
			free(temp2);
			return (1);
		}
		temp = temp->next;
		node++;
		}
		if (temp->next == NULL && index == node)
			{
			temp2 = temp->next;
			temp->next = temp2->next;
			free(temp2);
			return (1);
			}
	return (-1);
}
