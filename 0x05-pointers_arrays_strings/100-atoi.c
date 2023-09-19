/**
 * _atoi - str to i.
 * @s: a pointer to the str.
 *
 *
 * Return: the i
 */
int _atoi(char *s)
{
	int i = 0;
	unsigned int num = 0;
	int sign = 1;

	while (s[i])
	{
		if (s[i] >= 48 && s[i] <= 57)
		{
			while (s[i] >= 48 && s[i] <= 57)
			{
				num = (num * 10) + s[i] - 48;
				i++;
			}
			break;
		}
		if (s[i] == '-')
			sign *= -1;
		i++;
	}
	return (num * sign);
}
