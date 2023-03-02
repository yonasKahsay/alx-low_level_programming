#include "main.h"
#include <string.h>

/**
 * *cap_string - This funtion returnsan integer based on the
 * @c: inputted string
 *
 * Return: it returns a converted string
 */
char *cap_string(char *c)
		{
		int i = 0;

		while (c[i] != '\0')
		{
			if (c[i] > 96 && c[i] < 123 && (c[i - 1] == ' ' || 
			c[i - 1] == '\n' || c[i - 1] == '\t' || c[i - 1] == ',' || c[i - 1] == ';' ||
			c[i - 1] == '.' || c[i - 1] == '!' || c[i - 1] == '?' || c[i - 1] == '"' ||
		       c[i - 1] == '(' || c[i - 1] == ')' || c[i - 1] == '{' || c[i - 1] == '}'))
				c[i] = c[i] - 32;
			i++;
		}
		return (c);
		}
