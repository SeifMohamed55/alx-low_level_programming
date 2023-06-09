#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * free_dog - free my dog
 * @d: the struct
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
