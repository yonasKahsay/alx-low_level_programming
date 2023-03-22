#include "main.h"
#include <stdio.h>

/**
 * factorial - calculates the factorial of a number
 * @n: inputted number
 *
 * Return: it returns factorial of a number
 */
int factorial(int n)
		{
		if (n == 0 || n == 1)
			return (1);
		if (n < 0)
			return (-1);
		return (n * factorial(n - 1));
		}
