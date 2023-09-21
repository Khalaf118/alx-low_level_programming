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
	int len1 = 0;
	int len2 = 0;
	int i;

	while (dest[len1])
		len1++;
	while (src[len2])
		len2++;
	for (i = 0; i < n; i++)
		dest[i] = src[i];
	if (len1 <= len2 && n <= len2 && n >= len1)
		dest[n] = '\0';
	return (dest);
}
