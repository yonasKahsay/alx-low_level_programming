#include "main.h"

/**
 * _isupper - This function checks for uppercase letter
 * @c: inputted character
 *
 * Return: it returns 1 if c is uppercase 0 otherwise
 */
int _isupper(int c)
		{
		if (c > 64 && c < 91)
			return (1);
		else
			return (0);
		}
