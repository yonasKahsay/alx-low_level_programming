#include "main.h"
#include <stdio.h>
/**
 * main - Prime numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
	{
		long long int i;
		long long int n = 612852475143;

	for (i = 2 ; i <= 100000000 ; i++)
	{
		if (n % i == 0)
		{
			n = n / i;
			i = 1;
		}
	}
		printf("%dBuzz\n", n);
		return (0);
	}
