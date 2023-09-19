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
	int c2 = 0;
	int l = 0;
	char *rev = s

	while (s[l])
		l++;
	for (c = l - 1; c >= 0; c--)
	{
		*(rev + c2) = *(s + c);
		c2++;
	}
	for (c = 0; c < l; c++)
		*(s + c) = *(rev + c);
	_putchar('\n');
}
