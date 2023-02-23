#include "main.h"

/**
 * _isdigit - This function checks for uppercase letter
 * @c: inputted character
 *
 * Return: it returns 1 if c is uppercase 0 otherwise
 */
int _isdigit(int c)
		{
		if (c > 47 && c < 58)
			return (1);
		else
			return (0);
		}
