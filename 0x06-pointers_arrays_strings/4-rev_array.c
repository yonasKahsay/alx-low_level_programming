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
		int i;
		int b[n];

		for (i = 0 ; i < n ; i++)
		{
			a[i] = b[i];
		}
		for (i = 0 ; i < n ; i++)
		{
			a[i] = b[n];
			n--;
		}
		}
