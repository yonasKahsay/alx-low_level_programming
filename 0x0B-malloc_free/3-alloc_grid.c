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
		ret = malloc(4 * height * width);
		if (ret == NULL)
		{
			free(ret);
			return (NULL);
		}
		retun = malloc(4 * height * width);
		for (j = 0 ; j < (height * width) ; j++)
		{
			ret[i] = 0;
		}
		for (i = 0 ; i < height ; i++)
		{
			*(retun + i) = ret + i * width;
		}
		return (retun);
		}
