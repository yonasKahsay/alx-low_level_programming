#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints the numbers passed
 * @n: number of argument
 * @separator: separator character for the string
 *
 * Return: it returns nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
		{
		va_list argu;
		unsigned int i;

		va_start(argu, n);
		for (i = 0 ; i < n ; i++)
		{
			printf("%d", va_arg(argu, int));
			if (i == (n - 1))
				break;
			if (separator != NULL)
				printf("%s", separator);
		}
			printf("\n");
		}
