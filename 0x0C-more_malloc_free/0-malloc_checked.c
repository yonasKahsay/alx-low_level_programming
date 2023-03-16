#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - This function retruns a pointer to allocated space
 * @b: size of bytes
 *
 * Return: it returns nothing
 */
void *malloc_checked(unsigned int b)
		{
		void *ret;

		ret = malloc(b);
		if (ret == NULL)
		{
			exit(98);
		}
		return (ret);
		}
