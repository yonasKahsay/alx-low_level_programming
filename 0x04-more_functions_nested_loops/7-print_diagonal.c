#include "main.h"

/**
 * print_diagonal - This function checks for uppercase letter
 *@n: the number of a character should be printed
 *
 * Return: it returns nothing
 */
void print_diagonal(int n)
		{
			int i;
			int j;

			if (n <= 0)
				_putchar('\n');
			for (i = 0 ; i < n ; i++)
			{
				for (j = 0 ; j < i ; j++)
				{
					_putchar(' ');
				}
				_putchar('\\');
				_putchar('\n');
			}
		}
