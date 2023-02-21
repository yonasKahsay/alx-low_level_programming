#include "main.h"

/**
 *  _abs - function
 * @n: an inputted letter
 *
 * Return: n if it is positive , -n if it is negative, 0 if it is 0
 */
int _abs(int n)
	{
	if (n > 0)
		{
		return (n);
		}
	else if (n < 0)
		{
		return (-n);
		}
	else
		{
		return (0);
		}
	}
