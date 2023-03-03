#include "main.h"
#include<math.h>
/**
 * *infinite_add - This function checks for uppercase letter
 *@n1: inputted number
 *
 * Return: it returns their product
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
		{
			int i = 0, j = 0, n;
			r[size_r];
			char remain[size_r];
			
			while (n1[i] != '\0')
			{
				i++;
			}
			while (n2[j] != '\0')
			{
				j++;
			}
			if (i > r || j > r)
				return '0';
			if (i >= j)
			n = i;
			else
			n = j;
		remain[size_r - 2] = 0;
		for ( ; n >= 0 ; n--)
		{
			r[size_r - 1] = n1[i - 1]  + n2[j - 1] + remain[size_r - 2];
			if (r[size_r - 1] > 9)
			{
				r[size_r - 1] = r[size_r - 1] % 10;
				remain[size_r - 2] = 1;
			}
			else
			{
				remain[size_r - 2] = 0;
			}	
			i--;
			j--;
			size_r--;
			if (i < 0)
			n1[i] = 0;
			if (j < 0)
			n2[j] = 0;
		}	
				return (r);
		}
