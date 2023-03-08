#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - reverses a string
 * @s: pointer to  data of string
 *
 * Return: it returns nothing
 */
void _print_rev_recursion(char *s)
		{
		if (*s == '\0')
			return;
		_print_rev_recursion((s + 1));
		_putchar(*s);
			return;
		}
