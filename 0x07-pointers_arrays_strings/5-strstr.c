/**
 * _strstr -  finds the first occurrence of the substring.
 * @haystack: The main string.
 * @needle: The substring
 *
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	unsigned int i;
	unsigned int j;

	while (haystack[len1])
		len1++;
	while (needle[len2])
		len2++;
	if (len2 == 0)
		return (haystack);
	for (i = 0; i < len1; i++)
	{
		j = 0;
		if (haystack[i] == needle[0])
		{
			while (j < len2 && haystack[i + j] == needle[j])
				j++;
			if (j == len2)
				return (haystack + i);

		}
	}


	return (0);
}
