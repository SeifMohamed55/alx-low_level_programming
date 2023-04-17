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
	float *Nage = malloc(sizeof(float));

	if (new == NULL)
		return (NULL);

	if (Nname == NULL)
	{
		free(new);
		return (NULL);
	}
	if (Nowner == NULL)
	{
		free(new);
		free(Nname);
		return (NULL);
	}
	*Nage = age;
	Nname = strcpy(Nname, name);
	Nowner = strcpy(Nowner, owner);
	new->name = Nname;
	new->age = Nage;
	new->owner = Nowner;
	return (new);
}
