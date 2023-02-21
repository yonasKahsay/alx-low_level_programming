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
			_putchar('0');
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			j++;
		}
		else
		{
			m = l % 10;
			n = (l - m) / 10;
			_putchar(n + '0');
			_putchar(m + '0');
			if (m == 1 && n == 8)
				goto lastline;
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
lastline:
			j++;
		}
	}
	_putchar('\n');
	i++;
	}
	}
