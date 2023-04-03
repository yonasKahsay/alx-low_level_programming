#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - returns the number of elements in the linked list
 * @h: head of the list
 *
 * Return: Number of Nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
		{
		h = h->next;
		i++;
		}
	return (i);
}
