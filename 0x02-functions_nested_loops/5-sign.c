#include "main.h"

/**
 * print_sign - function
 * @n: an inputted letter
 *
 * Return: 0 if it is 0, 1 if it is positive , -1 if it is negative
 */

int print_sign(int n)
	{
	if (n > 0)
		{
		_putchar('+');
		return (1);
		}
	else if (n < 0)
		{
		_putchar('-');
		return (-1);
		}
	else
		{
		_putchar('0');
		return (0);
		}
	}
