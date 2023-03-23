#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prints the strings passed
 * @n: number of argument
 * @separator: separator character for the string
 *
 * Return: it returns nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
		{
		va_list argu;
		unsigned int i;
		char *c;

		va_start(argu, n);
		for (i = 0 ; i < n ; i++)
		{
			c = va_arg(argu, char *);
			if (c == NULL)
				printf("(nil)");
			else
			printf("%s", c);
			if (i == (n - 1))
				break;
			if (separator != NULL)
				printf("%s", separator);
		}
			printf("\n");
		}
