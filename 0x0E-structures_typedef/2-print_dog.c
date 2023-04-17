#include <stdio.h>
#include "dog.h"
void print_dog(struct dog *d)
{
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->age == NULL)
		age = 0;
	if (d->owner == NULL)
		d->name = "(nil)";
	printf("Name: %s\nAge:%f\nOwner: %s\n", d->name, d->age, d->owner);
}
