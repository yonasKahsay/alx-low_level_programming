#include "main.h"
#include <stdio.h>
/**
 * main - print putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
	{
	long int i, j = 1, k = 2;

	printf("%ld, %ld", j, k);
	for (i = 0 ; i < 24 ; i++)
	{
		printf(", ");
		j += k;
		k += j;
		printf("%ld, %ld", j, k);
	}
	printf("\n");
	return (0);
	}
