#include "main.h"
#include "6-abs.c"

/**
 * print_last_digit - function
 * @m: an inputted letter
 *
 * Return: m as it is the last digit of the no
 */
int print_last_digit(int m)
	{
	m = _abs(m);
	m = m % 10;
	m = _abs(m);
	_putchar(m + '0');
	return (m);
	}
