#include <stdio.h>
#include "main.h"
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
