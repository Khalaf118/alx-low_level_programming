#include "main.h"
/**
 * _strcpy - copies the string.
 * @dest: a pointer to the buffer
 * @src: a pointer to the string to be copied.
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}
