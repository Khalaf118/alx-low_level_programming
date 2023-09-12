#include "main.h"

/**
 * print_alphabet - a function that prints the alphabet, in lowercase,
 * followed by a new line.
 *
 * Return: void
 *
 */
void print_alphabet(void)
{
	char c;

	for (c = 97; c < 123; c++)
		_putchar(c);
	_putchar(10);
}
