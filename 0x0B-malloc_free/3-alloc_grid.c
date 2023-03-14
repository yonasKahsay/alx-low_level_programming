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
		if (ret == NULL)
		{
			free(ret);
			return (NULL);
		}
		retun = malloc(sizeof(ret) * height);
		if (retun == NULL)
		{
		free(retun);
		free(ret);
		return (NULL);
		}
		retun[0] = ret;
		for (j = 0 ; j < (width) ; j++)
		{
			ret[j] = 0;
		}
		for (i = 0 ; i < height ; i++)
		{
			retun[i] = retun[0] + i * width;
		if (retun[i] == NULL)
		{
		for (i = 0 ; i < height ; i++)
		{
			free(retun[i]);
		}
			free(ret);
			return (NULL);
		}
		}
		return (retun);
		}
