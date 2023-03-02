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
		int i, j;
		char a[] = { 'a', 'e', 'o', 't', 'l' };
		char A[] = { 'A', 'E', 'O', 'T', 'L' };
		char N[] = { '4', '3', '0', '7', '1' };

		while (c[i] != '\0')
		{
			for (j = 0 ; j < 5 ; j++)
			{
				if (c[i] == A[j] || c[i] == a[j])
					c[i] = N[j];
			}
				i++;
		}
		return (c);
		}
