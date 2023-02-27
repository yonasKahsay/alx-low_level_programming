#include "main.h"
#include <string.h>

/**
 * print_rev - This function prints a string
 * @*a: inputted array
 * @n: length of the array
 *
 * Return: it returns nothing
 */
void print_array(int *a, int n)
		{
		int i;

		for (i = 0 ; i < n ; i++)
		{
		printf("%d, ", a[i]);
		}
		 _putchar('\n');
		}
