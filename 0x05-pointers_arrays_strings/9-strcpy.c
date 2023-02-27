#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - This function prints a string
 * @dest: inputted array
 * @src: length of the array
 *
 * Return: it returns nothing
 */
char *_strcpy(char *dest, char *src)
		{
		int i;

		for (i = 0 ; i < 1000 ; i++)
		{
			*(dest + i) = *(src + i);
			if (*(src + i) == '\0')
				break;
		}
		return (dest);
		}
