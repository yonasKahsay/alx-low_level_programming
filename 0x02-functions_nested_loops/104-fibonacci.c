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
	int i, m, n;

	printf("%.1f, %.1f", j, k);
	for (i = 0 ; i < 48 ; i++)
	{
		printf(", ");
		j += k;
		for (m = 0 ; m < 100000 ; m++)
		{
			n = 1;
			n = n + m;
		}
		k += j;
		for (m = 0 ; m < 100000 ; m++)
                {
			n = n + m;
                }
		printf("%.1f, %.1f", j, k);
	}
	printf("\n");
	return (0);
	}
