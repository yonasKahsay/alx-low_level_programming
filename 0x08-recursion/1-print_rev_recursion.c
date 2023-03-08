#include "main.h"
#include <string.h>

/**
 * _print_rev_recursion -
 * @s: pointer to  data of string
 *
 * Return: it returns nothing
 */
void _print_rev_recursion(char *s)
		{
		 if (*s == '\0')
			return (NULL);
		_print_rev_recursion(char *(s + 1));
		printf("%c", *s);
		}
