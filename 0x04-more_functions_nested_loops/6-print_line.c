#include "main.h"
/**
 * print_line - draws a straight line in the terminal.
 * @n: the number of times '_' should be printed
 *
 * Return: void
 *
 */
void print_line(int n)
{
	if (n > 0)
		while (n)
		{
			_putchar('_');
			n--;
		}
	_putchar('\n');
}
