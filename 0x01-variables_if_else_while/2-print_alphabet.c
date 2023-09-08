#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch;

	ch = 97;
	while (ch < 123)
	{
		putchar(ch);
		ch++;
	}
	putchar(10);
	return (0);
}
