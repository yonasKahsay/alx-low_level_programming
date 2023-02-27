#include "main.h"
#include <string.h>

/**
 * puts2 - This function print every other string
 * @str: inputted string
 *
 * Return: it returns nothing
 */
void puts2(char *str)
		{
		int i;

		for (i = 0 ; i < 1000 ; i++)
		{
		if (((*(str + i)) == '\0' || *(str + i - 1)) == '\0')
		break;
		_putchar((*(str + i)));
		i = i + 2;
		}
		}
