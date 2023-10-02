#include "main.h"
/**
 * _puts - prints a string, followed by a new line.
 * @str: a pointer to the string
 *
 * Return: void
 */
void _puts(char *str)
{
	int c = 0;

	while (str[c])
	{
		_putchar(str[c]);
		c++;
	}
	_putchar('\n');
}
