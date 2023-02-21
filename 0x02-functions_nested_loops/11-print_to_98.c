#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - function
 *@n: n is argument
 *
 * Return: m as it is the last digit of the no
 */
void print_to_98(int n)
	{
	if (n <= 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	else
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	printf("%d\n", 98);
	}
