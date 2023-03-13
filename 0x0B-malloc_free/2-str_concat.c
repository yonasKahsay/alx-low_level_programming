#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - copies a given string to another location
 * @s1: string1
 * @s2: string2
 *
 * Return: it returns pointer to copied string
 */
char *str_concat(char *s1, char *s2)
		{
		unsigned int i = 0, j = 0, k = 0;
		char *ret;
		char *empty = " ";

		while (s1[i] != 0)
		{
		i++;
		}
		while (s2[j] != 0)
		{
		j++;
		}
		ret = malloc(i + j + 1);
		if (ret == NULL)
		return (NULL);
		for (k = 0; k < i ; k++)
		{
		if (s1 == NULL)
		s[k] = s[k+1]
		ret[k] = s1[k];
		}
		for (i = 0 ; i <= j ; i++)
		{
		if (s2 == NULL)
		ret[k] = empty[0];
		ret[k] = s2[i];
		k++;
		}
		return (ret);
		}
