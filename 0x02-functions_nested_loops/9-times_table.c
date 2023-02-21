#include "main.h"

/**
 * times_table - function
 *
 * Return: m as it is the last digit of the no
 */
void times_table(void)
	{
	int i = 0;
	int l, m, n;

	while (i < 10)
	{
	int j = 0;

	while (j < 10)
	{
		l = i * j;
		if (l < 10)
		{
			_putchar(l + '0');
			if (j == 9)
				goto lastline_;
			_putchar(',');
			_putchar(' ');
			if (i * (j + 1) < 10)
			_putchar(' ');
lastline_:
			j++;
		}
		else
		{
			m = l % 10;
			n = (l - m) / 10;
			_putchar(n + '0');
			_putchar(m + '0');
			if (j == 9)
				goto lastline;
			_putchar(',');
			_putchar(' ');
lastline:
			j++;
		}
	}
	_putchar('\n');
	i++;
	}
	}
