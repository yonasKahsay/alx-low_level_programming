#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - prints all arguments passed
 * @format: format of argument to be printed
 *
 * Return: it returns nothing
 */
void print_all(const char * const format, ...)
		{
		va_list argu;
		unsigned int i = 0;
		char *c, *com = "";

		va_start(argu, format);
		if (format != NULL)
		{
		while (format[i] != '\0')
			{
			switch (format[i])
				{
				case 'c':
					printf("%s%c", com, va_arg(argu, int));
					break;
				case 'i':
					printf("%s%d", com, va_arg(argu, int));
					break;
				case 'f':
					printf("%s%f", com, va_arg(argu, double));
					break;
				case 's':
					c = va_arg(argu, char *);
					if (c == NULL)
					c = "(nil)";
					printf("%s%s", com, c);
					break;
				default:
					i++;
					continue;
			}
			com = ", ";
			i++;
			}
			}
			printf("\n");
			va_end(argu);
			}
