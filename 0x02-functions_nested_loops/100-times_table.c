#include "main.h"
#include <stdio.h>
/**
 * print_times_table - function
 * @n: inputted n
 * Return: doesnt return anything
 */
void print_times_table(int n)
	{
	if (n >= 0 && n <= 15)
	{
	int i, j, l;

	for (i = 0 ; i < (n + 1) ; i++)
	{
	for (j = 0 ; j < (n + 1) ; j++)
	{
		l = i * j;
		if (l < 10)
		{
			printf("%d", l);
			if (j == n)
				break;
			printf(",  ");
			if (i * (j + 1) < 10)
			printf(" ");
		}
		else if (l >= 10 && l < 100)
		{
			printf("%d%d", ((l - (l % 10)) / 10), (l % 10));
			if (j == n)
				break;
			printf(", ");
			if (i * (j + 1) < 100)
			printf(" ");
		}
		else
		{
			printf("%d%d%d", 1, ((l - (l % 10)) / 10) % 10, l % 10);
			if (j == n)
				break;
			printf(", ");
		}
	}
	printf("\n");
	}
	}
	}
