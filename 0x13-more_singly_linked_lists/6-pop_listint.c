#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of the linked list
 * @head: head of the list
 *
 * Return: returns n
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return(0);
	data = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (data);
}
