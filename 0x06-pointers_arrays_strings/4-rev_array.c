#include "main.h"
#include <string.h>

/**
 * reverse_array - This funtion returnsan integer based on the  comparison.
 * @a: inputted string
 * @n: inputted string
 *
 * Return: it returns an integer
 */
void reverse_array(int *a, int n)
		{
		int i, j;

		for (i = 0 ; i < n ; i++)
		{
			j = a[i];
			a[i] = a[n - 1];
			a[n - 1] = j;
			n--;
		}
		}
