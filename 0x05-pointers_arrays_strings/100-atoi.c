#include "main.h"
#include <stdio.h>

/**
 * _atoi - This function prints a string
 * @s: inputted array
 *  
 * Return: it returns a number
 */
int _atoi(char *s)
		{	
			unsigned int i;
			int l;

		for (i = 0 ; i < 1000 ; i++)
		{
			if ((*s + i) <= 57 && (*s + i) >= 48)
				break;
		}
		l = (*s + i) - '0';
		return (l);
		}
