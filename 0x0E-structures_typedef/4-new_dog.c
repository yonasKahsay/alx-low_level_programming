#include <stdlib.h>
#include "dog.h"
#include <stdio.h>
/**
 * free_dog - function that frees dog
 * @d: of data type struct dog_t
 *
 */
void free_dog(dog_t *d)
		{
		if (d)
		{
		free(d->name);
		free(d->owner);
		free(d);
		}
		}
