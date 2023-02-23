#include "main.h"
i
/**
 * print_triangle - This function prints a triangle
 *@size: The size of the square
 *
 * Return: it returns nothing
 */
void print_triangle(int size)
		{
		int i, j;

			if (size <= 0)
			_putchar('\n');
				for (i = 0; i < size; i++)
			{
				for (j = 0; j < size; j++)
				{
					if ((i + j) >= (size - 1))
					{
					_putchar('#');
					}
					else 
					{
						_putchar(' ');
					}
				}
				_putchar('\n');
			}
		}
