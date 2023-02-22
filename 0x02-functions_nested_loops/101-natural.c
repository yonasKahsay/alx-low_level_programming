#include "main.h"
#include <stdio.h>
/**
 * main - print putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
	{
	int i = 1024, sum = 0;

	for (i = 1024 ; i > 0 ; i--)
	{
		if (i % 5 == 0 || i % 3 == 0)
		{
			sum += sum;
		}

	}
	return (0);
	}
