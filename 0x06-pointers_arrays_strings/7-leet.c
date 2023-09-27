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
	int j;
	char *s1 = "AaEeOoTtLl";
	char *s2 = "4433007711";

	while (str[i])
	{
		if (str[i] == 'A' || str[i] == 'a' ||
				str[i] == 'E' || str[i] == 'e' ||
				str[i] == 'O' || str[i] == 'o' ||
				str[i] == 'T' || str[i] == 't' ||
				str[i] == 'L' || str[i] == 'l')
		{
			j = 0;
			while (str[i] != s1[j])
				j++;
			str[i] = s2[j];
		}
		i++;
	}
	return (str);
}
