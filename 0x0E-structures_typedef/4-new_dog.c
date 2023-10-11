#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - creates a new dog.
 *@name: it's name
 *@age: age
 *@owner: owner
 *
 * Return: a pointer to the struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;

	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
		return(NULL);
	newdog->name = name;
	newdog->age = age;
	newdog->owner = owner;
	return (newdog);
}
