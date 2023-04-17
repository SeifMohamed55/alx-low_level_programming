#ifndef STRUCT_DOG
#define STRUCT_DOG
/**
 * struct dog - struct about dog
 * @name: array of char
 * @age: age
 * @owner: array of char
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
