#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - reverses a string
 * @s: pointer to  data of string
 *
 * Return: it returns nothing
 */
void _puts_recursion(char *s)
		{
		if (*s == '\0')
			return;
		_putchar(*s);
			return;
		_puts_recursion(s + 1);
		}
