#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: a pointer to the string
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i, len = 0;
	char sw;

	while (s[len])
		len++;

	for (i = 0; i < (len / 2); i++)
	{
		sw = *(s + i);
		*(s + i) = *(s + len - 1 - i);
		*(s + len - 1 - i) = sw;
	}
}
