#include "main.h"
#include <string.h>

/**
 * *_strncat - This function concatenates two strings
 * @src: inputted string
 * @dest: inputted string
 * @n: inputted no of string to concatenate
 *
 * Return: it returns a concattenated string
 */
char *_strncat(char *dest, char *src, int n)
		{
		int i, j;

		for (i = 0 ; i < 1000 ; i++)
		{
		if ((*(dest + i)) == '\0')
		break;
		}
		j = 0;
		while (j < n && *(src + j) !=0)
		{
			(*(dest + i)) = (*(src + j));
			j++;
			i++;
		}
			(*(dest + i)) = '\0';
			return (dest);
		}
