#include "main.h"
/**
 * puts2 - prints every other character of a string
 * starting with the first character, followed by a '\n'.
 * @str: a pointer to the string
 *
 * Return: void
 */
void puts2(char *str)
{
	int c = 0;

	while (str[c])
	{
		if (c % 2 == 0)
		{
			_putchar(str[c]);
		}
		c++;
	}
	_putchar('\n');
}
