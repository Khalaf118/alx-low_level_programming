/**
 * _strspn - gets the length of a prefix substring.
 * @s: The main string.
 * @accept: The substring
 *
 * Return: the number of bytes in s
 * which consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;
	unsigned int i = 0;
	unsigned int j;
	unsigned int n = 0;

	while (accept[len])
		len++;
	while (s[i])
	{
		for (j = 0; j < len; j++)
		{
			if (s[i] == accept[j])
			{
				n++;
				break;
			}
		}
		if (n != 0 && j == len)
			break;
		i++;
	}
	return (n);
}
