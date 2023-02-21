#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - function
 *
 * This prints lower case alphabets ten times
 */
void print_alphabet_x10(void)
	{
		int j = 0;

		while (j < 10)
			{
			int i = 97;

			while (i < 123)
				{
				putchar(i);
				i++;
				}
			putchar('\n');
			j++;
			}
	}
