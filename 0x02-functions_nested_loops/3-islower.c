/**
 * _islower - checks for lowercase character.
 * @c: The character to be checked
 *
 * Return: On lowercase 1, otherwise 0.
 *
 */
int _islower(int c)
{
	if (c < 97 || c > 122)
		return (0);
	else
		return (1);
}
