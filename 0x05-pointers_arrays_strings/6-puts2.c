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

		for (i = 0 ; i < 1000 ; i = i + 2)
		{
		if ((*(str + i)) == '\0')
		break;
		_putchar(*(str + i));
		if ((*(str + i + 1)) == '\0')
                break;
		}
		_putchar('\n');
		}
