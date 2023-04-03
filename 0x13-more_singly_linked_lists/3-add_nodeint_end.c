#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end
 * @head: head of the list
 * @n: value of the datat
 *
 * Return: the pointer to the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
		listint_t *new;
		listint_t *temp = *head;

		new = malloc(sizeof(listint_t));
		if (new == NULL)
			return (NULL);
		new->n = n;
		new->next = NULL;
		if (temp == NULL)
			{
			*head = new;
			return (new);
			}
		while (temp->next)
			temp = temp->next;
		temp->next = new;
		return (new);
}
