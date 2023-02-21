#include <stdio.h>
/**
 * _isalpha - function
 * @c: an inputted letter
 *
 * Return: 0 if it is not letter, 1 if it is letter
 */
int _isalpha(int c)
	{
	if ((c < 123 && c > 96) || (c < 91 && c > 64))
		return (1);
	else
		return (0);
	}
