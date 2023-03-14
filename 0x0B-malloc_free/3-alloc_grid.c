#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - to a 2 dimensional array of integers.
 * @width: the width for the array.
 * @height: the height for an array.
 *
 * Return: it returns pointer array
 */
int **alloc_grid(int width, int height)
		{
		int i = 0, j = 0;
		int *ret;
		int **retun;

		if (width <= 0 || height <= 0)
			return (NULL);
		ret = malloc(sizeof(int) * width);
		retun = malloc(sizeof(ret) * height);
		for (j = 0 ; j < (width) ; j++)
		{
			ret[j] = 0;
		}
		retun[0] = ret;
		for (i = 0 ; i < height ; i++)
		{
		for (j = 0 ; j < width ; j++)
		{
			retun[i][j] = ret[j];
		}
		}
		return (retun);
		}
