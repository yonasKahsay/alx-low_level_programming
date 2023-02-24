#include "main.h"
#include <stdio.h>
#include <math.h>
void print_number(int n)
                {
                        int i, j, k, u, v;
                        int p = n;

                        if (n < 0)
			{
                                putchar('-');
			n = -1 * n;
		}
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
                                while (u < k)
                                {
                                        v = 10 * v;
                                        u++;
                                }
                                p = n / v;
                                n = n - (p * v);
                               putchar(p + '0');
                               /* if (n < (v / 10))
                                {
                                        putchar('0');
                                        k--;
                                        i--;
                                }
                                else if (n < (v / 100))
                                {
                                        putchar('0');
                                        putchar('0');
                                        k = k - 2;
                                        i = i - 2;
                                }
                                else if (n < (v / 1000))
                                {
                                        putchar('0');
                                        putchar('0');
                                        putchar('0');
                                        k = k - 3;
                                        i = i - 3;
                                }
                                else
                                {
                                }*/
                                k--;
                        }
                }



/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_number(98);
    putchar('\n');
    print_number(402);
    putchar('\n');
    print_number(1024);
    putchar('\n');
    print_number(0);
    putchar('\n');
    print_number(-98);
    putchar('\n');
    return (0);
}
