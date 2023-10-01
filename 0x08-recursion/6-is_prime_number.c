int _prime_(int num, int d);
/**
 * is_prime_number - if the input is a prime number or not.
 *
 * @n: The no.
 *
 * Return: The result.
 * 1: a prime number.
 * 0: not a prime.
 *
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n == 2 || n == 3)
		return (1);
	return (_prime_(n, 2));
}
/**
 * _prime_ - if the input is a prime or not.
 *
 * @num: The no.
 * @d: The denominator used for checking.
 *
 * Return: The result.
 *
 */
int _prime_(int num, int d)
{
	if (num % d == 0)
		return (0);
	if (d == num / 2)
		return (1);
	return (_prime_(num, d + 1));
}
