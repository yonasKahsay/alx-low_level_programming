#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - prints the elements of the list
 * @h: head of the list
 *
 * Return: Number of Nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	if (h == NULL)
	return (i);
	while (h != NULL)
	{
	printf("%i\n", h->n);
	h = h->next;
	i++;
	}
	return (i);
}
