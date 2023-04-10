#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <math.h>
/**
 * print_binary - Print binary number
 * @n: decimal no
 *
 * Return: returns unsinged integer
 */
void print_binary(unsigned long int n)
	{
		unsigned long int k = 1, temp = 0;
		int count = 0;

here:
	count = 0;
	while (k <= n)
		{
		k = k * 2;
		count++;
		}
	count = count - 1;
	k = k >>1;
	temp = temp >>1;
	while ((temp) > k)
		{
		printf("0");
		temp = temp >> 1;
		}
	n = n - k;
	temp = k;
	k = k >>(count);
	printf("%lu", k);
	if (n != 0)
	{
	goto here;
	}
	else if (n == 0 && count == 0)
		{
				printf("0");
				 goto here;
		}
	}
