/**
 * _isalpha - checks for alphabetic character.
 * @c: The character to be checked
 *
 * Return: if a letter 1, otherwise 0.
 *
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
