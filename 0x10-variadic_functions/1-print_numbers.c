#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>

/**
 * print_numbers - it's clear
 * @separator: the string to be printed between numbers
 * @n: number of args
 *
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	if (separator == NULL)
		return;
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (i < n - 1)
			printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}
