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
		int **ret = 0;

		if (width <= 0 || height <= 0)
			return (NULL);
		*ret = malloc(4*height*width);
		if (ret == NULL)
			return (NULL);
		for (i = 0 ; i < height ; i++)
		{
			for (j = 0; j < width ; j++)
			{
			}
		}
		return (ret);
		}
