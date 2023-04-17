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
	char *Nname = malloc(sizeof(strlen(name)));
	char *Nowner = malloc(sizeof(strlen(owner)));

	if (new == NULL)
		return (NULL);

	if (Nname == NULL)
		return (NULL);
	if (Nowner == NULL)
		return (NULL);
	*Nage = age;
	Nname = strcpy(Nname, name);
	Nowner = strcpy(Nowner, owner);
	new->name = Nname;
	new->age = age;
	new->owner = Nowner;
	return (new);
}
