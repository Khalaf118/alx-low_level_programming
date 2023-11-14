/**
 * _strcat - concatenates two strings.
 * @dest: a pointer to the 1st string.
 * @src: a pointer to the 2nd string.
 *
 * Return: the concatenated string.
 *
 */
char *_strcat(char *dest, char *src)
{
	int len1 = 0;
	int len2 = 0;
	int i;

	while (dest[len1])
		len1++;
	while (src[len2])
		len2++;
	for (i = 0; i < len2; i++)
		dest[len1 + i] = src[i];
	dest[len1 + len2] = '\0';
	return (dest);
}
