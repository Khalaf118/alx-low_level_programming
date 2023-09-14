/**
 * _isupper - checks for uppercase character.
 * @c: The character to be checked
 *
 * Return: On uppercase 1, otherwise 0.
 *
 */
int _isupper(int c)
{
	if (c < 65 || c > 90)
		return (0);
	else
		return (1);
}
