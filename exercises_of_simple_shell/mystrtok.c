#include <string.h>
#include <stdlib.h>

/**
 * mystrtok - splits a string and
 * returns an array of each word of the string.
 * @str: the string.
 * @delim: the string containing the delimiters
 *
 * Return: a pointer to the first token found in the string
 */
char **mystrtok(char *str, const char *delim)
{
	char *firsttoken;
	char **token = malloc(1024 * sizeof(char *));
	int i = 0;

	firsttoken = strtok(str, delim);
	while (firsttoken != NULL)
	{
		token[i] = firsttoken;
		i++;
		firsttoken = strtok(NULL, delim);
	}
	token[i] = NULL;
	return (token);
}
