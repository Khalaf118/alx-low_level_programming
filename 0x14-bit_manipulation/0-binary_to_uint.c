#include <stdlib.h>
/**
 * binary_to_uint - converts a binary number to an u_int.
 * @b: the binary number as a string.
 *
 * Return: the unsigned integer.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum, num = 0;
	int i, k, len = 0;
	int power = 0;

	if (b == NULL)
		return (0);

	while (b[len] != '\0')
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		len++;
	}

	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] == '1' && i == len - 1)
			num = 1;
		else if (b[i] == '1')
		{
			sum = 1;
			for (k = 0; k < power; k++)
				sum *= 2;
			num += sum;
		}
		power++;
	}

	return (num);
}
