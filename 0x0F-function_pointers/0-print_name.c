#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints a name
 * @name: inputted name
 * @f: function pointer
 *
 * Return: it returns nothing
 */
void print_name(char *name, void (*f)(char *))
		{
		if (name == NULL)
			return;
		f(name);
		}
