#include "main.h"
#include <stdio.h>i
/**
 * main - print putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
	{
	float i, j = 1, k = 2;

	printf("%lf, %lf", j, k);
	for (i = 0 ; i < 48 ; i++)
	{
		printf(", ");
		j += k;
		k += j;
		printf("%lf, %lf", j, k);
	}
	printf("\n");
	return (0);
	}
