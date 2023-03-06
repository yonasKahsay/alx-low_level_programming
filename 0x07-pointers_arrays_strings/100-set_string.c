#include "main.h"
#include <stdio.h>

/**
 * set_string - replaces one string with another
 * @s: strint
 * @to: string
 *
 * Return: it returns nothing
 */
void set_string(char **s, char *to)
		{
			***s = **to;
		}
