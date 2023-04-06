#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <math.h>
/**
 * binary_to_uint - converts binary to unsigned integer
 * @b: binary no
 *
 * Return: returns unsinged integer
 */
unsigned int binary_to_uint(const char *b)
	{
	unsigned int i = 0, decimal = 0;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
	if (b[i] == '0' || b[i] == '1')
		decimal = (decimal << 1) + (b[i] - '0');
	else
		return (0);
	i++;
	}
		return (decimal);
	}
