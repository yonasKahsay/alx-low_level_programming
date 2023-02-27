#include "main.h"

/**
 * swap_int - This function updateds the vallue it points to 98
 * @a: first no
 * @b: second no
 *
 * Return: it returns nothing
 */
void swap_int(int *a, int *b)
		{
		int n = *a;
		*a = *b;
		*b = n;
		}
