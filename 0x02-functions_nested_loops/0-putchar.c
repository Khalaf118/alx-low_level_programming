#include <stdio.h>
int _putchar(char c);
/*
 *
 *
 * main : The entry point
 *
 * Return value is (0) when success
 *
 *
 */
int main(void)
{
	char string[] = "_putchar";
	int counter=0;

	while(counter < 8)
	{
		_putchar(string[counter]);
		counter++;
	}
	_putchar(10);
	return (0);
}
