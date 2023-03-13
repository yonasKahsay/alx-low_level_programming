#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - This function creates an array of size.
 * @size: size of the array
 * @c: inputted string
 *
 * Return: it returns 0 if the program compiles ok
 */
char *create_array(unsigned int size, char c)
		{
		char *ret;
		unsigned int i;

		if (size == 0)
		return (NULL);
		ret = malloc(size);
		if (ret == NULL)
		return (ret);
		for (i = 0 ; i < size ; i++)
		{
			ret[i] = c;
		}
		return (ret);
		}
