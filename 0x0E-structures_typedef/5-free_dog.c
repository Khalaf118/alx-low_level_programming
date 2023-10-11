#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - free the func
 *@d: a pointer to the struct
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	free(d);
}
