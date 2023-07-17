#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initializex the struct
 * @d: pointer to struct
 * @name: pointer to name
 * @age: age
 * @owner: string
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
