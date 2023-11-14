#include <stdio.h>
#include <stdlib.h>

/**
 * main - Write a program that prints "$ ",
 * wait for the user to enter a command,
 * prints it on the next line.
 * @ac: arguments count.
 * @av: arguments vector.
 *
 * Return: Always 0.
 */
int main(__attribute__((unused)) int ac, __attribute__((unused)) char **av)
{
	char *line = NULL;
	size_t len = 0;

	printf("$ ");
	while (getline(&line, &len, stdin) != -1)
	{
		printf("%s", line);
		printf("$ ");
	}
	free(line);
	return (0);
}
