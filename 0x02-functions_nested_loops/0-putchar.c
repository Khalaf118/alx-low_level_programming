#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char string[] = "_putchar";
	int counter = 0;

	while (counter < 8)
	{
		_putchar(string[counter]);
		counter++;
	}
	_putchar(10);
	return (0);
}
