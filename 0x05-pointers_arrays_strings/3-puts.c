#include "main.h"
#include <string.h>

/**
 * _puts - This function prints a string
 * @str: inputted string
 *
 * Return: it returns nothing
 */
void _puts(char *str)
		{
		int i;

		for (i = 0 ; i < 1000 ; i++)
		{
		if ((*(str + i)) == '\0')
		break;
		_putchar(*(str + i));
		}
		 _putchar('\n');
		}
