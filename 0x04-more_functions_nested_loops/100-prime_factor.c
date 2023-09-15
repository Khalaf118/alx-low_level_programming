#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	long int i;
	long int num = 612852475143;

	for (i = 2; i < num; i++)
	{
		while ((num % i) == 0)
			num /= i;
	}
	printf("%ld\n", num);
	return (0);
}
