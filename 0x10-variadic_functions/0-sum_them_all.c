#include "variadic_functions.h"
#include <stdio.h>

/**
 * sum_them_all - sums all the argument of the functions
 * @n: number of argument
 *
 * Return: it returns the sum of the arguments
 */
int sum_them_all(const unsigned int n, ...)
		{
		va_list argu;
		unsigned int i;
		int sum = 0;

		if (n == 0)
			return (0);
		va_start(argu, n);
		for (i = 0; i < n ; i++)
			sum += va_arg(argu, int);
		va_end(argu);
		return (sum);
		}
