#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int w, x, y, z;

	for (w = 48; w < 58; w++)
	{
		for (x = 48; x < 58; x++)
		{
			for (y = 48; y < 58; y++)
			{
				for (z = 48; z < 58; z++)
				{
					if (x < z || w < y)
					{
						putchar(w);
						putchar(x);
						putchar(32);
						putchar(y);
						putchar(z);
						if (w != 57 && x != 56)
						{
							putchar(44);
							putchar(32);
						}
					}
				}
			}
		}
	}
	putchar(10);
	return (0);
}
