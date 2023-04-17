#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - function that initialize a variable of type struct dog
 * @d: initialize pointer to struct dog
 * @name: initialize name
 * @age: the age
 * @owner: the owner initialization
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == 0)
	d->name = name;
	d->age = age;
	d->owner = owner;
}
