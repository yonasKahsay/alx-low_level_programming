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
		while (j < n)
		{
			(*(dest + i)) = (*(src + j));
			j++;
			i++;
		if ((*(src + j)) == '\0' && j == n)
		{
			j++;
		}
		}
		return (dest);
		}
