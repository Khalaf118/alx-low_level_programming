#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: string1
 * @s2: string2
 * @n: first bytes of s2
 *
 * Return: pointer that points to a newly allocated space
 * in memory, which contains s1, followed by the
 * first n bytes of s2, and null terminated.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	unsigned int i, m;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;
	str = malloc(sizeof(char) * (len1 + n + 1));
	if (str == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		str[i] = s1[i];
	if (n >= len2)
		for (m = 0; m < len2; m++)
			str[i + m] = s2[m];
	else
		for (m = 0; m < n; m++)
			str[i + m] = s2[m];
	str[i + m] = '\0';
	return (str);
}
