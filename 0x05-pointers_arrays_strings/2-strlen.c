#include "main.h"
#include <string.h>

/**
 * _strlen - This function updateds the vallue it points to 98
 * @s: first no
 *
 * Return: it returns nothing
 */
int _strlen(char *s)
		{
		int i;
		char c;
		char d;

		for (i =0 ;i <100 ; i++)
		{
		c = *(s + i);
		d = *(s + (i + 1));
		if (c == ' ' && d == ' ')
			break;
		}
		return (i);
		}
