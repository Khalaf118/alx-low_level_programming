#include "main.h"
/**
 * more_numbers -  prints the numbers, from 0 to 14.
 *
 *
 * Return: void.
 *
 */
void more_numbers(void)
{
	int i, n;

	for (n = 0; n < 10; n++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i > 9)
				_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
