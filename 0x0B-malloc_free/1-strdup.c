#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - copies a given strint to another location
 * @str: inputted string
 *
 * Return: it returns pointer to copied string
 */
char *_strdup(char *str)
		{
		unsigned int i = 0, j;
		char *ret;

		if (str == NULL)
		return (NULL);
		while (str[i] != '\0')
		{
		i++;
		}
		ret = malloc(i + 1);
		if (ret == NULL)
		return (NULL);
		for (j = 0 ; j <= i ; j++)
		{
			ret[j] = str[j];
		}
		return (ret);
		}
