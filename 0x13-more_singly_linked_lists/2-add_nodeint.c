#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning
 * @head: head of the list
 * @n: value of the datat
 *
 * Return: the pointer to the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
		listint_t *new;

		new = malloc(sizeof(listint_t));
		if (new == NULL)
			return (NULL);
		new->n = n;
		new->next = *head;
		*head = new;
		return (new);
}
