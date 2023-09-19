#include "main.h"
/**
 * print_rev - prints a string, in reverse, followed by '\n'.
 * @s: a pointer to the string
 *
 * Return: void
 */
void print_rev(char *s)
{
	int c;
	int l = 0;

	while (s[l])
		l++;
	for (c = l - 1; c >= 0; c--)
		_putchar(s[c]);
	_putchar('\n');
}
