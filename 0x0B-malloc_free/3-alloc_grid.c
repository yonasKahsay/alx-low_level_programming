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
		ret = malloc(sizeof(int) * width * height);
		if (ret == NULL)
		{
			free(ret);
			return (NULL);
		}
		retun = malloc(sizeof(int*) * height);
		for (i = 0 ; i < height ; i++)
		{
			if (retun[i] == NULL)
			{
			for (j = 0 ; j < height ; j++)
			{
				free(retun[j]);
			}
				free(ret);
				return (NULL);
		}
		}
		*retun = ret;
		for (j = 0 ; j < (width * height) ; j++)
		{
			ret[j] = 0;
		}
		for (i = 0 ; i < height ; i++)
		{
			retun[i] = ret + width * i;
		}
		return (retun);
		}
