/**
 * string_toupper - lowercase to uppercase.
 * @str: a pointer to the string.
 *
 * Return: the uppercase string.
 *
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] -= 32;
		i++;
	}
	return (str);
}
