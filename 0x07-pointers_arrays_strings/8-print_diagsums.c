#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers.
 * @a: the string
 * @size: of the square
 *
 * Return: Nothing.
 */
void print_diagsums(int *a, int size)
{
	int i;
	int ds1 = 0;
	int ds2 = 0;

	for (i = 0; i < size * size; i++)
	{
		if (i % (size + 1) == 0)
			ds1 += a[i];
		if (size > 2 && i != 0 && i < (size * size) - 1)
			if (i % (size - 1) == 0)
				ds2 += a[i];
		if (size == 2)
			ds2 = a[1] + a[2];
		if (size == 1)
			ds2 = a[0];
	}
	printf("%d, %d\n", ds1, ds2);
}
