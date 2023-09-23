/**
 * leet - encodes a string into 1337.
 * @str: a pointer to the string.
 *
 * Return: the encoded string.
 *
 */
char *leet(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] == 'A' || str[i] == 'a' ||
			str[i] == 'E' || str[i] == 'e' ||
			str[i] == 'O' || str[i] == 'o' ||
			str[i] == 'T' || str[i] == 't' ||
			str[i] == 'L' || str[i] == 'l')

		if (str[i] >= 97 && str[i] <= 122)
			str[i] -= 32;
		i++;
	}
	return (str);
}
