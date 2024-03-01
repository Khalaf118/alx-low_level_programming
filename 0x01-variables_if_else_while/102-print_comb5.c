#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x, y;

	for (x = 0; x <= 98; x++)
		for (y = x + 1; y <= 99; y++)
		{
			putchar((x / 10) + 48);
			putchar((x % 10) + 48);
			putchar(32);
			putchar((y / 10) + 48);
			putchar((y % 10) + 48);
			if (x != 98)
			{
				putchar(44);
				putchar(32);
			}
		}
	putchar(10);
	return (0);
}
