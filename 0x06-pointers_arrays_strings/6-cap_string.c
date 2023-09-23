/**
 * cap_string - capitalizes all words of a string.
 * @str: a pointer to the string.
 *
 * Return: the capitalized string.
 *
 */
char *cap_string(char *str)
{
	int i = 0;

	while (str[i])
	{
		i++;
		if (str[i] >= 97 && str[i] <= 122)
		{
			if (str[i - 1] == ' ' || str[i - 1] == 9 ||
					str[i - 1] == '\n' || str[i - 1] == ',' ||
					str[i - 1] == ';' || str[i - 1] == '.' ||
					str[i - 1] == '!' || str[i - 1] == '?' ||
					str[i - 1] == '"' || str[i - 1] == '(' ||
					str[i - 1] == ')' || str[i - 1] == '{' ||
					str[i - 1] == '}')
				str[i] -= 32;
		}
	}
	return (str);
}
