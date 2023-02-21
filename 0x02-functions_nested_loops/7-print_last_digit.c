#include "main.h"
#include "6-abs.c"

/**
 * print_last_digit - function
 * @n: an inputted letter
 *
 * Return: m as it is the last digit of the no
 */
int print_last_digit(int n)
	{
	int m;

	m =_abs(n);
	m = m % 10;
	_putchar(m + '0');
	return (m);
	}
