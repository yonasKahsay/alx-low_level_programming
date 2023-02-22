#include "main.h"
#include <stdio.h>
/**
 * main - print putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
	{
	unsigned long int i, j = 1, k = 2;

	printf("%lu, %lu", j, k);
	for (i = 0 ; i < 48 ; i++)
	{
		printf(", ");
		j += k;
		k += j;
		printf("%lu, %lu", j, k);
	}
	printf("\n");
	return (0);
	}
