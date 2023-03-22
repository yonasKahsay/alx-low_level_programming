#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - function that searches for an integer.
 * @array: array pointer
 * @size: size of the array
 * @cmp: Pointer to function
 *
 * Return: it returns nothing
 */
int int_index(int *array, int size, int (*cmp)(int))
		{
		 int i, Ret;

		if (array == NULL || cmp == NULL || size <= 0)
			return (-1);

		for (i = 0 ; i < size ; i++)
		{
			Ret = cmp(array[i]);
			if (Ret != 0)
				return (i);
		}
			return (-1);
		}
