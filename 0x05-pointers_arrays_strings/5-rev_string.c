#include "main.h"
/**
 * rev_string - reverses a string.
 * @s: a pointer to the string
 *
 * Return: void
 */
void rev_string(char *s)
{
	int c;
	int l = 0;
	char rev;

	while (s[l])
		l++;
	for (c = 0; c < l; c++)
	{
		rev = s[c];
		s[c] = s[l - 1 - c];
		s[l - 1 - c] = rev;
	}
}
