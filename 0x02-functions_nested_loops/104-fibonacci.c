#include "main.h"
#include <stdio.h>
#include <time.h>

/**
 * main - print putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
	{
	float j = 1, k = 2;
	int i;

	printf("%.0f, %.0f", j, k);
	for (i = 0 ; i < 48 ; i++)
	{
		printf(", ");
		j += k;
		k += j;
		printf("%.0f, %.0f", j, k);
	}
	printf("\n");
	return (0);
	}
