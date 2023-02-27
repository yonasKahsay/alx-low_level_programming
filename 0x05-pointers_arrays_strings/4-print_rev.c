#include "main.h"
#include <string.h>

/**
 * print_rev - This function prints a string
 * @s: inputted string
 *
 * Return: it returns nothing
 */
void print_rev(char *s)
		{
		int i;

		for (i = 0 ; i < 1000 ; i++)
		{
		if ((*(s + i)) == '\0')
		break;
		}
		i--;
		while (i >= 0)
		{
			_putchar((*(s + i)));
				i--;
		}
		 _putchar('\n');
		}
