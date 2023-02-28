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
			int l = 0, d;

		for (i = 0 ; i < 1000 ; i++)
		{
			if ((*s + i) <= 57 && (*s + i) >= 48)
				for (j = 1 ; j < 100 ; j++)
				{
					if ((*s + (i + j)) >= 57 && (*s + (i + j)) <= 48)
						goto lastline;
				}
			break;
		}
lastline:
		d = j;
		for (j = 1 ; j < d ; j++)
		l = l + ((*s + (i + j)) - '0') * 10**(d - j) ;
		return (l);
		}
