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
			if ((*s + i) <= 9 && (*s + i) >= 4)
				break;
		}
		l = (int)(*s + i);
		return (l);
		}
