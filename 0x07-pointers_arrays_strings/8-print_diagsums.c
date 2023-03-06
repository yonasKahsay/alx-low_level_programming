#include "main.h"
#include <string.h>

/**
 * print_diagsums - gets the sum of the diagonals of the array
 * @a: pointer to  data of array
 * @size: the sizer of an array
 *
 * Return: it returns a pointer to the first appearance of the letter c
 */
void print_diagsums(int *a, int size)
		{
		int i, j;
		int sum1 = 0, sum2 = 0;

		for (i = 0 ; i < size ; i++)
		{
			for (j = 0; j < size ; j++)
			{
				if (i == j)
				sum1++;
				if (i + j == size)
				sum2++;
			}
		}
		printf("%d, %d", sum1, sum2);
		}
