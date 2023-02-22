#include "main.h"
#include <stdio.h>
/**
 * print_times_table - function
 * @n: inputted n
 *
 * Return: doesnt return anything
 */
void print_times_table(int n)
	{
	if (n >= 0 && n <= 15)
	{
	int i = 0;
	int l, m, q, p;

	while (i < (n + 1))
	{
	int j = 0;

	while (j < (n + 1))
	{
		l = i * j;
		if (l < 10)
		{
			printf("%d", l);
			if (j == n)
				goto lastline_;
			printf(",  ");
			if (i * (j + 1) < 10)
			printf(" ");
lastline_:
			j++;
		}
		else if (l >= 10 && l < 100)
		{
			m = l % 10;
			q = (l - m) / 10;
			printf("%d%d", q, m);
			if (j == n)
				goto lastline;
			printf(", ");
			if (i * (j + 1) < 100)
			printf(" ");
lastline:
			j++;
		}
		else
		{
			m = l % 10;
			q = ((l - m) / 10) % 10;
			p = 1;
			printf("%d%d%d", p, q, m);
			if (j == n)
				goto lastline__;
			printf(", ");
lastline__:
			j++;
		}
	}
	printf("\n");
	i++;
	}
	}
	}
