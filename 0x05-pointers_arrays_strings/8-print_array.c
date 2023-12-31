#include <stdio.h>
/**
 * print_array - prints n elements of an array of integers.
 * @a: a pointer to the array.
 * @n: number of elements.
 *
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int num;

	for (num = 0; num < n; num++)
	{
		printf("%d", *(a + num));
		if (num < (n - 1))
			printf(", ");
	}
	printf("\n");
}
