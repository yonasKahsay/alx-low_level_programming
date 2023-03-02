#include "main.h"
#include <string.h>

/**
 * *rot13 - This funtion returnsan integer based on the
 * @c: inputted string
 *
 * Return: it returns a converted string
 */
char *rot13(char *c)
		{		
		int i = 0, j;

		char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
		char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

		while (c[i] != '\0')
		{
			for (j = 0 ; j < 52 ; j++)
			{
				if (c[i] == input[j])
				{
					c[i] = output[];
				}
			}
				i++;
		}
		return (c);
		}
