/**
 * _strlen_recursion - string length.
 * @s: The string.
 *
 * Return: The length
 */
int _strlen_recursion(char *s)
{
	if (s[0] == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
