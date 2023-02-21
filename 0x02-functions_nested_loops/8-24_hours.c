#include "main.h"

/**
 * jack_bauer - function
 *
 * Return: m as it is the last digit of the no
 */
void jack_bauer(void)
	{
	int i = 0;
	int j, k, l;

	while (i < 3)
	{
		int j = 0;

		while (j < 9)
		{
			int k = 0;

			while (k < 6)
			{
				int l = 0;

				while (l < 9)
				{
					if (i == 2 && j == 4 && k == 0 && l == 0)
						goto lastline;
					_putchar (i);
					_putchar (j);
					_putchar (':');
					_putchar (k);
					_putchar (l);
					_putchar ('\n');
					l++;
				}
				k++;
			}
			j++;
		}
		i++;
	}
lastline:
	}
