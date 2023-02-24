#include "main.h"
#include<math.h>
/**
 * print_number - This function checks for uppercase letter
 *@n: inputted number
 *
 * Return: it returns their product
 */
void print_number(int n)
		{
			int i, j, k, u, v;
			int p = n;

			if (n < 0)
				_putchar('-');
			for (i = 1 ; i < 100 ; i++)
			{
				p = p / 10;
				if (p < 1)
				break;
			}
			k = i - 1;
			for (j = 0 ; j < i ; j++)
			{
				v = 1;
				u = 0;
				while (u < (k - 1))
				{
					v = 10 * v;
					u++;
				}
				p = n / v;
				n = n - (p * v);
				_putchar(p + '0');
				k--;
			}
		}
