/**
 * _strchr - locates a character in a string.
 * @s: The string.
 * @c: The character.
 *
 * Return: a pointer to the first occurrence of the ch,
 * or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != c && s[i])
		i++;
	if (s[i] == c)
		return (s + i);
	else
		return (0);
}
