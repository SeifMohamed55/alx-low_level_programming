#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * free3 - free the dog part
 * @name: ptr
 * @owner: ptr
 * @d: the struct
 *
 * Return: void
 */
void free3(dog_t *d, char *name, char *owner)
{
	free(d);
	free(name);
	free(owner);
}
/**
 * new_dog - creates a new dog
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: the new struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new = malloc(sizeof(dog_t));
	char *Nname = malloc(sizeof(strlen(name)));
	char *Nowner = malloc(sizeof(strlen(owner)));

	if (new == NULL)
	{
		free3(new, Nname, Nowner);
		return (NULL);
	}
	if (Nname == NULL)
	{
		free3(new, Nname, Nowner);
		return (NULL);
	}
	if (Nowner == NULL)
	{
		free3(new, Nname, Nowner);
		return (NULL);
	}
	Nname = strcpy(Nname, name);
	Nowner = strcpy(Nowner, owner);
	new->name = Nname;
	new->age = age;
	new->owner = Nowner;
	return (new);
}
