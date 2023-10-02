/**
 * _memset - fills memory with a constant byte.
 * @s: The pointer to the memory area
 * @b: The constant byte to fill the string with.
 * @n: The first bytes to be filled.
 *
 * Return: The pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
