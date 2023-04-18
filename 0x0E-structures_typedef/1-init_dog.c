#include <stdlib.h>
#include "dog.h"

/**
  * init_dog - Initializes the dog structure
  * @d: The dog structure.
  * @name: The name argument of the dog.
  * @age: The age argument of the dog.
  * @owner: The owner argument of the dog.
  * Return: void
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
