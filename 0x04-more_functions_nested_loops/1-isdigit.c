/**
 * _isdigit - checks for digits.
 * @c: The character to be checked
 *
 * Return: On digit 1, otherwise 0.
 *
 */
int _isdigit(int c)
{
	if (c < 48 || c > 57)
		return (0);
	else
		return (1);
}
