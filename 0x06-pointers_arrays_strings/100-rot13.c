/**
 * rot13 - encodes a string using rot13.
 * @str: a pointer to the string.
 *
 * Return: the encoded string.
 *
 */
char *rot13(char *str)
{
	int i = 0;
	int j;

	while (str[i])
	{
		if ((str[i] >= 'A' && str[i] <= 'Z') ||
			(str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] += 13;
		}
		i++;
	}
	return (str);
}
