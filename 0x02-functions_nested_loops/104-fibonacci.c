#include "main.h"
#include <stdio.h>
/**
 * main - print putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
	{
	double i, j = 1, k = 2;

	printf("%Lf, %Lf", j, k);
	for (i = 0 ; i < 48 ; i++)
	{
		printf(", ");
		j += k;
		k += j;
		printf("%Lf, %Lf", j, k);
	}
	printf("\n");
	return (0);
	}
