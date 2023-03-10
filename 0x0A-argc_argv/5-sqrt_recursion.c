#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - calculates the square root of a number
 * @n: inputted number
 *
 * Return: it returns the squareroot of a number
 */
int _sqrt_recursion(int n)
		{
		int i = 0;

		if (n < 0)
		return (-1);
		return (find_sqrt(n, i));
		}
/**
  * find_sqrt - calculates the square root of a number
  * @n: inputted number
  * @i: to check the square root
  *
  * Return: it returns the squareroot of a number
  */
int find_sqrt(int n, int i)
		{
			if (n == i * i)
				return (i);
			if (i > n)
				return (-1);
			return (find_sqrt(n, i + 1));
		}
