#include "main.h"

/**
 * jack_bauer - function
 *
 * Return: m as it is the last digit of the no
 */
void jack_bauer(void)
	{
	int i = 0;

	while (i < 3)
	{
		int j = 0;

		while (j < 10)
		{
			int k = 0;

			while (k < 6)
			{
				int l = 0;

				while (l < 10)
				{
					if (i == 2 && j >= 4)
						goto lastline;
					_putchar (i + '0');
					_putchar (j + '0');
					_putchar (':');
					_putchar (k + '0');
					_putchar (l + '0');
					_putchar ('\n');
lastline:
					l++;
				}
				k++;
			}
			j++;
		}
		i++;
	}
	}
