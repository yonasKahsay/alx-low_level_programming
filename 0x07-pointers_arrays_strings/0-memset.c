#include "main.h"
#include <string.h>

/**
 * *_memset - fills the first n memory byters with a constant
 * @s: pointer to the first address
 * @b: constant byte
 * @n: the size
 *
 * Return: it returns a pointer pointing to contstant byte address
 */
char *_memset(char *s, char b, unsigned int n)
		{
		unsigned int i;

		for (i = 0 ; i < n ; i++)
		{
			*(s + i) = b;
		}
		return (s);
		}
