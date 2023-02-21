#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - function
 *
 * This prints lower case alphabets
 */
void print_alphabet(void) /** this function prints lower case alphabets */
	{
		int i = 97;

		while (i < 123)
		{
			putchar(i);
			i++;
		}
		putchar('\n');
	}
