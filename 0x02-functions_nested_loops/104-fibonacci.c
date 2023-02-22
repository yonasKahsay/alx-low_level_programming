#include "main.h"
#include <stdio.h>
/**
 * main - print putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
	{
	float i, j = 1, k = 2;

	printf("%g, %g", j, k);
	for (i = 0 ; i < 48 ; i++)
	{
		printf(", ");
		j += k;
		k += j;
		printf("%.xg, %.xg", j, k);
	}
	printf("\n");
	return (0);
	}
