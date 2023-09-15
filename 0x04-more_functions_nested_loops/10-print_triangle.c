#include "main.h"
/**
 * print_triangle - draws a diagonal line in the terminal.
 * @size: the number of times '\' should be printed
 *
 * Return: void
 *
 */
void print_triangle(int size)
{
	int counter = 0;
	int i;

	if (size > 0)
		while (size)
		{
			_putchar('#');
			if (size > 1)
			{
				_putchar('\n');
				counter++;
				for (i = 0; i < counter; i++)
					_putchar(' ');
			}
			size--;
		}
	_putchar('\n');
}
