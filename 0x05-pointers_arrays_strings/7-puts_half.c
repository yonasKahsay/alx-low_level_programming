#include "main.h"
#include <string.h>

/**
 * puts_half - This function prints a string
 * @s: inputted string
 *
 * Return: it returns nothing
 */
void puts_half(char *str)
		{
		int i, j;

		for (i = 0 ; i < 1000 ; i++)
		{
		if ((*(str + i)) == '\0')
		break;
		}
		i--;
		if(i % 2 == 0)
		{
			j = i / 2;
			while(j <= i)
			{
				_putchar((*(str + j)));
				j++;
			}
		}
		else
		{
			j = ((i - 1) / 2);
			while(j <= i)
                        {
                                _putchar((*(str + j)));
                                j++;
                        }
		}
		 _putchar('\n');
		}
