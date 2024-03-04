#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: the number not less than 0 or greater than 15
 *
 * Return: void
 */
void print_times_table(int n)
{
	int r, c, result;

	if (n >= 0 && n <= 15)
	{
		for (r = 0; r <= n; r++)
		{
			for (c = 0; c <= n; c++)
			{
				result = r * c;
				if (result < 10 && c != 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else if (result >= 10 && result < 100)
				{
					_putchar(' ');
					_putchar((result / 10) + '0');
				}
				else if (result >= 100)
				{
					_putchar((result / 100) + '0');
					_putchar(((result - (result / 100) * 100)) / 10 + '0');
				}
				_putchar((result % 10) + '0');
				if (c < n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
