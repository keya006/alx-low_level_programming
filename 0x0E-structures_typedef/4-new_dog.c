#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - fxn that creates a new dog
 * @name: name of  dog
 * @age: age of  dog
 * @owner: owner of  dog
 *
 * Return: struct dog and on fail NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *r_dog;
	int k, lname, lowner;

	r_dog = malloc(sizeof(*r_dog));
	if (r_dog == NULL || !(name) || !(owner))
	{
		free(r_dog);
		return (NULL);
	}

	for (lname = 0; name[lname]; lname++)
		;

	for (lowner = 0; owner[lowner]; lowner++)
		;

	r_dog->name = malloc(lname + 1);
	r_dog->owner = malloc(lowner + 1);

	if (!(r_dog->name) || !(r_dog->owner))
	{
		free(r_dog->owner);
		free(r_dog->name);
		free(r_dog);
		return (NULL);
	}

	for (k = 0; k < lname; k++)
		r_dog->name[k] = name[k];
	r_dog->name[k] = '\0';

	r_dog->age = age;

	for (k = 0; k < lowner; k++)
		r_dog->owner[k] = owner[k];
	r_dog->owner[k] = '\0';

	return (r_dog);
}
