#include "main.h"

/**
 * more_numbers - This function checks for uppercase letter
 *
 * Return: it returns nothing
 */
void more_numbers(void)
		{
			int i;
			int j = 0;

			while (j < 10)
			{
			for (i = 0 ; i < 14 ; i++)
			{
				if (i > 9)
					_putchar(1 + '0');
				_putchar(i % 10 + '0');
			}
			_putchar('\n');
			j++;
			}
		}
