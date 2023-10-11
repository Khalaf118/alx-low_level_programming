#include "dog.h"
/**
 * init_dog - initialize a variable of type struct dog
 *@d: a pointer to the struct
 *@name: 1st element
 *@age: 2nd
 *@owner: 3rd
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
