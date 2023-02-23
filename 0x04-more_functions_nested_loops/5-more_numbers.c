#include "main.h"

/**
 * more_numbers - This function checks for uppercase letter
 *
 * Return: it returns nothing
 */
void more_numbers(void)
		{
			int i, j=0;

			while (j < 10)
			{
			for (i = 0 ; i < 14 ; i++)
			{
				if (i > 9)
					_putchar('1');
				_putchar(i % 10 + '0');
			}
			if (j == 9)
				break;
			_putchar('\n');
			j++;
			}
		}
