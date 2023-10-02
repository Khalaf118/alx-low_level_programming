/**
 * _strlen - returns the length of a string.
 * @s: a pointer to the string
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int l = 0;

	while (s[l])
		l++;
	return (l);
}
