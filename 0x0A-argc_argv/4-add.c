#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that multiplies two numbers.
 *
 * @argc: counts of arguments
 * @argv: array of arguments string
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	if (argc > 1)
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]) == 0)
			{
				printf("Error\n");
				return (1);
			}
			sum += atoi(argv[i]);
		}
	printf("%d\n", sum);
	return (0);
}
