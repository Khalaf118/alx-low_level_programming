#include "main.h"
/**
 * print_diagonal - draws a diagonal line in the terminal.
 * @n: the number of times '\' should be printed
 *
 * Return: void
 *
 */
void print_diagonal(int n)
{
	int counter = 0;
	int i;

	if (n > 0)
		while (n)
		{
			_putchar('\\');
			if (n > 1)
			{
				_putchar('\n');
				counter++;
				for (i = 0; i < counter; i++)
					_putchar(' ');
			}
			n--;
		}
	_putchar('\n');
}
