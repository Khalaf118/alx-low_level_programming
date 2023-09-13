#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int sum = 0;
	long int t;
	long int fc = 1;
	long int fp = 1;

	while (fc <= 4e6)
	{
		if (fc % 2 == 0)
			sum += fc;
		t = fp + fc;
		fp = fc;
		fc = t;
	}
	printf("%ld\n", sum);
	return (0);
}
