#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 *
 * @s1: string 1
 * @s2: string 2
 *
 * Return:
 * a pointer to the concatenated string,
 * NULL on failure.
 *
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	unsigned int i, n;
	char *str;

	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;
	str = malloc(len1 + len2 + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		str[i] = s1[i];
	for (n = 0; n < len2; n++)
		str[i + n] = s2[n];
	str[len1 + len2] = '\0';
	return (str);
}
