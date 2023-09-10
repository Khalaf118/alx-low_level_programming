#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x, y, z;

	for (x = 48; x < 56; x++)
	{
		for (y = x + 1; y < 57; y++)
		{
			for (z = y + 1; z < 58; z++)
			{
				putchar(x);
				putchar(y);
				putchar(z);
				if (x < 55)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar(10);
	return (0);
}
