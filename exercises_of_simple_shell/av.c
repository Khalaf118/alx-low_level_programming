#include <stdio.h>

/**
 * main - prints all the arguments, without using ac.
 * @ac: arguments count.
 * @av: arguments vector of strings.
 *
 * Return: Always 0.
 */
int main(__attribute__((unused)) int ac, char **av)
{
	int i = 0;

	while (av[i] != NULL)
	{
		printf("%s\n", av[i]);
		i++;
	}
	return (0);
}
