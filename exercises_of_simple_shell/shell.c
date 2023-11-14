#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * main - Write a program that prints "$ ",
 * wait for the user to enter a command,
 * prints it on the next line.
 * @ac: arguments count.
 * @av: arguments vector.
 *
 * Return: Always 0.
 */
int main(__attribute__((unused))int ac, __attribute__((unused)) char **av)
{
	char *line = NULL;
	size_t len = 0;

	printf("#cisfun$ ");
	getline(&line, &len, stdin);
	char *const argv[] = {line, NULL};
	execve(line, argv, NULL);
	free(line);
	return (0);
}
