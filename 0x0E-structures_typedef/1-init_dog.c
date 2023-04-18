#include "dog.h"

/**
 * init_dog - it will  initialize a variable of type struct dog
 * @d: the dog
 * @name: name of the dog
 * @age: age dog
 * @owner: the one responsible for the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
