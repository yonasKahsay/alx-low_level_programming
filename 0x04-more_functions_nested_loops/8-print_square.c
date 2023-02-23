#include "main.h"i

/**
 * print_square - This function checks for uppercase letter
 *@size: The size of the square
 *
 * Return: it returns nothing
 */
void print_square(int size)
		{
			int i, j;

			if (size <= 0)
			{
				_putchar('\n');
			}
			for (i = 0 ; i < size ; i++)
			{
				for (j = 0 ; j < size ; j++)
				{
					_putchar('#');
				}
				_putchar('\n');
			}
		}
