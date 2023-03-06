#include "main.h"
#include <string.h>

/**
 * *_memcpy - fills the first n memory byters with a constant
 * @dest: pointer to  data to be copied to
 * @src: pointer to data to be copied
 * @n: the size
 *
 * Return: it returns a pointer pointing to contstant byte address
 */
char *_memcpy(char *dest, char *src, unsigned int n)
		{
		unsigned int i;

		for (i = 0 ; i < n ; i++)
		{
			*(dest + i) = *(src + i);
		}
		return (dest);
		}
