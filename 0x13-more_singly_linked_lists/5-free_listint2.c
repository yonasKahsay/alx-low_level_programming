#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees list
 * @head: head of the list
 *
 * Return: returns nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
	temp = (*head)->next;
	free(*head);
	*head = temp;
	}
	*head = NULL;
}
