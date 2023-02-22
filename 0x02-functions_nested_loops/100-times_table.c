#include "main.h"

/**
 * print_times_table - function
 * @n: inputted n
 *
 * Return: doesnt return anything
 */
void print_times_table(int n)
	{
	if (n >= 0 && n <= 15)
	{
	int i = 0;
	int l, m, n, p;

	while (i < (n + 1))
	{
	int j = 0;

	while (j < (n + 1))
	{
		l = i * j;
		if (l < 10)
		{
			_putchar(l + '0');
			if (j == n)
				goto lastline_;
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			if (i * (j + 1) < 10)
			_putchar(' ');
lastline_:
			j++;
		}
		else if (l >= 10 && l < 100)
		{
			m = l % 10;
			n = (l - m) / 10;
			_putchar(n + '0');
			_putchar(m + '0');
			if (j == n)
				goto lastline;
			_putchar(',');
			_putchar(' ');
			if (i * (j + 1) < 100)
			_putchar(' ');
lastline:
			j++;
		}
		else
		{
			m = l % 10;
			n = ((l - m) / 10) % 10;
			p = 1;
			_putchar(p + '0');
			_putchar(n + '0');
			_putchar(m + '0');
			if (j == n)
				goto lastline__;
			_putchar(',');
			_putchar(' ');
lastline__:
			j++;
		}
	}
	_putchar('\n');
	i++;
	}
	}
	}
