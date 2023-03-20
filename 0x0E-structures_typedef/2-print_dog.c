#include <stdlib.h>
#include "dog.h"
#include <stdio.h>
/**
 * print_dog - function to print the specs of dog
 * @d: of data type struct
 *
 */
void print_dog(struct dog *d)
		{
		if (d == NULL)
			return;
		if (d->name == NULL)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		if (d->owner == NULL)
			printf("Owner: (nil)\n");
		else
			printf("owner: %s\n", d->owner);
		}
