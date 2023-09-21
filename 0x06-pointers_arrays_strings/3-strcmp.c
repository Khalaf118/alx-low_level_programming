/**
 * _strcmp - compares two strings.
 * @s1: a pointer to the 1st string.
 * @s2: a pointer to the 2nd string.
 *
 * Return: 0 if they are the same
 * +ve if s1 > s2
 * -ve if si < s2
 *
 */
int _strcmp(char *s1, char *s2)
{
	int len1 = 0;
	int len2 = 0;

	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;
	if (len1 > len2)
		return (+15);
	else if (len1 < len2)
		return (-15);
	else
		return (0);
}
