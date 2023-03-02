#include "main.h"
#include <string.h>

/**
 * *string_toupper - This funtion returnsan integer based on the
 * @c: inputted string
 *
 * Return: it returns a converted string
 */
char *string_toupper(char *c)
		{
		int i = 0, j;
		
		while (c[i] != 0)
		{
			if ( c[i] > 96 && c[i] < 123)
		 	c[i] = c[i] - '32';
				i++;
		}
		return (c);
		}
