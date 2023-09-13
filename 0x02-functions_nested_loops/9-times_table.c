#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0.
 * 
 *
 * Return: void
 *
 */
void times_table(void)
{
	int r, c, result;

	for (r = 0; r < 10; r++)
	{
		for (c= 0; c < 10; c++)
		{
			result = r * c;
			_putchar((result / 10) + '0');
			_putchar((result % 10) + '0');
			if(c < 9)
			{
				_putchar(',');
				_putchar(32);
			}
		}
		_putchar('\n');
	}
}
