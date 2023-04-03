#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees list
 * @head: head of the list
 *
 * Return: returns nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
	temp = head->next;
	free(head);
	head = temp;
	}
}
