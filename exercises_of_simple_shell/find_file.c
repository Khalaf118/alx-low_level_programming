#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - stat example
 * @ac: arguments count
 * @av: arguments vector (arry of strings)
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	unsigned int i = 1; struct stat st;

	char *str = getenv("PATH"); const char s[2] = ":"; char *token, *t;

	if (ac < 2)
	{
		printf("Usage: %s path_to_file ...\n", av[0]);
		return (1);
	}

	while (av[i])
	{
		token = strtok(str, s);
		while ( token != NULL ) 
		{
			printf("%s:", av[i]);
			t = _strcat(token, "/");
			if (stat(_strcat(t, av[i]), &st) == 0)
                        	printf(" FOUND\n");
                	else
				printf(" NOT FOUND\n");
			token = strtok(NULL, s);
		}
		i++;
	}
	return (0);
}
