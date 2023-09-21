/**
 * _strncpy - copies a string.
 * @dest: a pointer to the 1st string.
 * @src: a pointer to the 2nd string to be copied.
 * @n: no. of bytes from src to be copied.
 *
 * Return: the resulting string.
 *
 */
char *_strncpy(char *dest, char *src, int n)
{
	int l1 = 0;
	int l2 = 0;
	int i;

	while (dest[l1])
		l1++;
	while (src[l2])
		l2++;
	if ((l1 >= l2 && l2 >= n) ||
		(l1 <= l2 && l2 > n && l1 < n) ||
		(l1 <= l2 && l2 > n && l1 <= n))
	{
		for (i = 0; i < n; i++)
			dest[i] = src[i];
		if (l1 <= l2 && l2 > n && l1 <= n)
			dest[n] = '\0';
	}
	else
	{
		for (i = 0; i < l2; i++)
			dest[i] = src[i];
		for (i = l2; i < n; i++)
			dest[i] = '\0';
		if (n > l1)
			dest[n] = '\0';
	}
	return (dest);
}
