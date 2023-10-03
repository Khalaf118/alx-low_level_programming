#include <stdio.h>
/**
 * main - a program that prints
 * the number of arguments passed into it.
 *
 * @argc: counts of arguments
 * @argv: array of arguments string
 *
 * Return: Always 0.
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
