#include "main.h"
#include <string.h>

/**
 * *_strncpy - This function copies one string to another
 * @src: inputted string
 * @dest: inputted string
 * @n: inputted no of string to concatenate
 *
 * Return: it returns a concattenated string
 */
char *_strncpy(char *dest, char *src, int n)
		{
		int i, j;

		for (i = 0 ; i < 1000 ; i++)
		{
		if ((*(dest + i)) == '\0')
		break;
		}
		j = 0;
		while (j < n && *(src + j) != '\0')
		{
			(*(dest + j)) = (*(src + j));
			j++;
		}
		while (j < n)
		{
			(*(dest + j)) = '\0';
			j++;
		}
			return (dest);
		}
