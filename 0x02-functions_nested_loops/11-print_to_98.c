#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from n to 98, followed by '\n'.
 * @n: The number to start printing from
 *
 * Return: void
 *
 */
void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}
	while (n > 98)
	{
		printf("%d, ", n);
		n--;
	}
	printf("98\n");
}
