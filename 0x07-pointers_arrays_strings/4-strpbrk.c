/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: The main string.
 * @accept: The substring
 *
 * Return: a pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int len = 0;
	unsigned int i = 0;
	unsigned int j;

	while (accept[len])
		len++;
	while (s[i])
	{
		for (j = 0; j < len; j++)
			if (s[i] == accept[j])
				return (s + i);
		i++;
	}
	return (0);
}
