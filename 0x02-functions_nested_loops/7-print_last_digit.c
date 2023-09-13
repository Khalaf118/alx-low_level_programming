#include "main.h"
/**
 * print_last_digit - computes the absolute value of an integer.
 * @n: The number to print its last digit
 *
 * Return: last digit
 *
 */
int print_last_digit(int n)
{
	int ld;

	if (n >= 0)
		ld = n % 10;
	else
		ld = (n * -1) % 10;
	_putchar(ld + '0');
	return (ld);
}
