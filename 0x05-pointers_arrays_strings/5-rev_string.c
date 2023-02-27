#include "main.h"
#include <string.h>

/**
 * rev_string - This function reverses a string
 * @s: inputted string
 *
 * Return: it returns nothing
 */
void rev_string(char *s)
		{
		int i, j = 0;
		char c[1000];

		for (i = 0 ; i < 1000 ; i++)
		{
		if ((*(s + i)) == '\0')
		break;
		c[i] = (*(s + i));
		}
		i--;
		while (i >= 0)
		{
		*(s + j) = c[i];
			j++;
			i--;
		}
		}
