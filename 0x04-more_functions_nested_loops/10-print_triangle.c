#include "main.h"
/**
 * print_triangle - prints a triangle.
 * @size: the size of the triangle.
 *
 * Return: void
 *
 */
void print_triangle(int size)
{
	int row, col;

	if (size > 0)
	{
		for (row = 1; row <= size; row++)
		{
			col = 1;
			while (col <= (size - row))
			{
				_putchar(' ');
				col++;
			}
			while (col <= size)
			{
				_putchar('#');
				col++;
			}
			if (row != size)
				_putchar('\n');
		}
	}
	_putchar('\n');
}
