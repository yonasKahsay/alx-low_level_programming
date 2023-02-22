#include "main.h"
#include <stdio.h>
/**
 * main - print putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
	{
	long int i, j = 1, k = 2, sum = 2;

	for (i = 0 ; i < 100 ; i++)
	{
		j += k;
		k += j;
		if (j > 4000000 || k > 4000000)
			break;
		if (j % 2 == 0 && k % 2 == 0)
			sum = sum + j + k;
		else if (j % 2 == 0)
			sum = sum + j;
		else if (k % 2 == 0)
			sum = sum + k;
	}
	printf("%ld\n", sum);
	return (0);
	}
