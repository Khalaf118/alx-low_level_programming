/**
 * _memcpy - copies a memory area.
 * @dest: a pointer to the 1st area.
 * @src: a pointer to the 2nd area to be copied.
 * @n: no. of bytes from src to be copied.
 *
 * Return: a pointer to the area dest.
 *
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int l1 = 0;
	unsigned int l2 = 0;
	unsigned int i;

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
