#include "main.h"
/**
 * puts_half - prints half of a string, followed by a '\n'.
 * @str: a pointer to the string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int c;
	int l = 0;

	while (str[l])
		l++;
	if (l % 2 == 0)
		for (c = l / 2; c < l; c++)
			_putchar(str[c]);
	else
		for (c = (l / 2) + 1; c < l; c++)
			_putchar(str[c]);
	_putchar('\n');
}
