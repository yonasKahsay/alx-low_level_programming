#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - calloc using malloc
 * @nmemb: number of elements
 * @size: size of elements
 *
 * Return: it returns nothing
 */
void *_calloc(unsigned int nmemb, unsigned int size)
		{
		unsigned int i;
		char *ret;

		if (nmemb == 0 || size == 0)
			return (NULL);
		ret = malloc(size * nmemb);
		if (ret == NULL)
			return (NULL);
		for (i = 0 ; i < nmemb ; i++)
		{
			ret[i] = 0;
		}
		return (ret);
		}
