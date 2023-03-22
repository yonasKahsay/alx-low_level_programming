#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - performs action each elements of an array
 * @array: array pointer
 * @size: size of the array
 * @action: Pointer to do action
 *
 * Return: it returns nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
		{
		unsigned long int i;

		if (array == NULL || action == NULL)
			return;

		for (i = 0 ; i < size ; i++)
		{
			action(array[i]);
		}
		}
