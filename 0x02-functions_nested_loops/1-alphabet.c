#include <stdio.h>
#include "main.h"
/**
 *function
 *
 * This prints lower case alphabets
 */
void print_alphabet(void)
	{
		int i = 97;

		while (i < 123)
		{
			putchar(i);
			i++;
		}
		putchar('\n');
	}
