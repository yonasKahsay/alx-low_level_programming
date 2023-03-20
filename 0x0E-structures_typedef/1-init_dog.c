#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - function to initialze dog
 * @d: of data type struct
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Return: Returns nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
		{
		if (d == NULL)
			d = malloc(sizeof(struct dog));
		d->name = name;
		d->age = age;
		d->owner = owner;
		}
