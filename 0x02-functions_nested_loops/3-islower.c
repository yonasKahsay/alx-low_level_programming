#include "main.h"

/**
 *  _islower - function
 * @c: an inputted letter
 *
 * Return: 0 if it is not lower case, 1 if it is uppercase
 */
int _islower(int c)
	{
	if (c < 123 && c > 96)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	}
