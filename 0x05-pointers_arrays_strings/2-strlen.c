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
		char c [100];

		for (i =0 ;i <100 ; i++)
		{
		c[i] = *(s + i);
		if (c[i] == ' ' && c[i-1] == ' ')
                        break;
		}
		return (i);
		}
