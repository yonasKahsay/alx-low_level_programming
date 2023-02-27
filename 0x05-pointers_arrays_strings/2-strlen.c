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
		char c[1000];

		for (i = 0 ; i < 1000 ; i++)
		{
		c[i] =  *(s + i);
		if (c[i] == '\0')
		break;
		}
		return (i);
		}
