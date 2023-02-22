#include "main.h"
#include <stdio.h>
/**
 * main - print putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
	{
	int i, j = 1, k = 2;

	printf("%d, %d", j, k);
	for (i = 0 ; i < 50 ; i++)
	{
		printf(", ");
		j += k;
		k += j;
		printf("%d, %d", j, k);
	}
	printf("\n");
	return (0);
	}
