#include "main.h"
#include <string.h>

/**
 * print_chessboard - prints an elements of an array
 * @a: pointer to  data of array
 *
 * Return: it returns a pointer to the first appearance of the letter c
 */
void print_chessboard(char (*a)[8])
		{
		 int i, j, k;

		while (**(a + k) != '\0')
			{
			k++;
			}

		for (i = 0 ; i < k ; i++)
		{
			for (j = 0; j < 8 ; j++)
			{
				_putchar(*a[i][j]);
			}
			_putchar('\n');
		}
		}
