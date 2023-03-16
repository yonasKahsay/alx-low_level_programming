#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: minimum integer
 * @max: maximum integer
 *
 * Return: it returns nothing
 */
int *array_range(int min, int max)
		{
		int i = 0;
		int *ret;

		if (min > max)
		return (NULL);
		ret = malloc(sizeof(int) * (max - min + 1));
		if (ret == NULL)
		return (NULL);
		for (i = 0 ; i < (max - min + 1) ; i++)
		{
			ret[i] = min + i;
		}
		return (ret);
		}
