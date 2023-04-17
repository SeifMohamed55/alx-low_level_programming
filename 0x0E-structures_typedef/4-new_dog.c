#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
#include <string.h>
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

	if (new == NULL)
		return (NULL);
	char *Nname = malloc(sizeof(strlen(name)));
	if (Nname == NULL)
		return (NULL);
	char *Nowner = malloc(sizeof(strlen(owner)));
	if (Nowner == NULL)
		return (NULL);
	Nname = strcpy(Nname, name);
	Nowner = strcpy(Nowner, owner);
	new->name = Nname;
	new->age = age;
	new->owner = Nowner;
	return (new);
}
