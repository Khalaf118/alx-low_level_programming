#include "main.h"

/**
 * print_alphabet_x10 - a function that prints the alphabet, in lowercase,
 * followed by a new line 10 times.
 *
 * Return: void
 *
 */
void print_alphabet_x10(void)
{
	char c;
	int i = 0;

	while (i < 10)
	{
		for (c = 97; c < 123; c++)
			_putchar(c);
		_putchar(10);
		i++;
	}
}
