#include <stdio.h>
/**
 * main - a program that prints its name.
 * @argc: counts of arguments
 * @argv: array of arguments string
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
