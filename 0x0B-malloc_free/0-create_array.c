#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 *
 * @size: The size of the array.
 * @c: the char.
 *
 * Return: NULL if size = 0
 * a pointer to the array, or NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
	char *car;
	unsigned int i;

	if (size == 0)
		return (NULL);
	car = malloc(size + 1);
	if (car == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		car[i] = c;
	car[size] = '\0';
	return (car);
}
