#include <stdio.h>
/**
 * main - a program that prints all arguments.
 *
 * @argc: counts of arguments
 * @argv: array of arguments string
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
