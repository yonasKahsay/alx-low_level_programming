#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - sums the data n
 * @head: head of the list
 *
 * Return: returns the sum of n data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
		{
			sum = sum + head->n;
			head = head->next;
		}
	return (sum);
}
