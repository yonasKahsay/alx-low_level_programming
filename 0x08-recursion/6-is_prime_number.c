#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - checks if a number is prime or not
 * @n: inputted number
 *
 * Return: it returns 1 if a number is prime no
 */
int is_prime_number(int n)
		{
		int i = 1;

		if (n <= 1)
		return (0);
		return (find_prime(n, i));
		}
/**
  * find_prime - checks if a number is prime or not
  * @n: inputted number
  * @i: to check if it is prime
  *
  * Return: it returns to know whether it prime or composite
  */
int find_prime(int n, int i)
		{
			if (n % i == 0)
				return (0);
			if (i > n)
				return (1);
			return (find_prime(n, i + 1));
		}
