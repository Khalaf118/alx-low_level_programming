#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	long int t;
	long int fc = 1;
	long int fp = 1;

	for (n = 1; n < 98; n++)
	{
		printf("%ld, ", fc);
		t = fp + fc;
		fp = fc;
		fc = t;
	}
	printf("%ld\n", fc);
	return (0);
}
