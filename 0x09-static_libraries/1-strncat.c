/**
 * _strncat - concatenates two strings.
 * @dest: a pointer to the 1st string.
 * @src: a pointer to the 2nd string.
 * @n: n most bytes from src.
 *
 * Return: the concatenated string.
 *
 */
char *_strncat(char *dest, char *src, int n)
{
	int len1 = 0;
	int len2 = 0;
	int i;

	while (dest[len1])
		len1++;
	while (src[len2])
		len2++;
	if (len2 < n)
	{
		for (i = 0; i < len2; i++)
			dest[len1 + i] = src[i];
		dest[len1 + len2] = '\0';
	}
	else
	{
		for (i = 0; i < n; i++)
			dest[len1 + i] = src[i];
		dest[len1 + n] = '\0';
	}
	return (dest);
}
