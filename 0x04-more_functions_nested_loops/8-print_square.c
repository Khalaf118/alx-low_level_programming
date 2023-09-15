#include "main.h"
/**
 * print_square - Print a square.
 * @size: the size of the square.
 *
 * Return: void
 *
 */
void print_square(int size)
{
	int c, r;

	if (size > 0)
		for (r = 0; r < size; r++)
		{
			for (c = 0; c < size; c++)
				_putchar('#');
			if ((size - r) > 1)
				_putchar('\n');
		}

	_putchar('\n');
}
