#include "main.h"
#include <string.h>

/**
 * *leet - This funtion returnsan integer based on the
 * @c: inputted string
 *
 * Return: it returns a converted string
 */
char *leet(char *c)
		{
		int i = 0;

		while (c[i] != '\0')
		{
			if (c[i] == 'a' || c[i] == 'A')
				c[i] == '4';
			else if (c[i] == 'e' || c[i] == 'E')
				c[i] == '3';
			else if (c[i] == 'o' || c[i] == 'O')
				c[i] == '0';
			else if (c[i] == 't' || c[i] == 'T')
				c[i] == '7';
			else if (c[i] == 'l' || c[i] == 'L')
				c[i] == '1';
			else

			i++;
		}
		return (c);
		}
