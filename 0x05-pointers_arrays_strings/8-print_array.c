#include "main.h"
#include <stdio.h>

/**
 * print_array - This function prints a string
 * @a: inputted array
 * @n: length of the array
 *
 * Return: it returns nothing
 */
void print_array(int *a, int n)
		{
		int i;

		for (i = 0 ; i < n ; i++)
		{
			if (i == (n - 1))
			{
			printf("%d", a[i]);
			}
			else
			{
		printf("%d, ", a[i]);
		}
		}
		 _printf("\n");
		}
