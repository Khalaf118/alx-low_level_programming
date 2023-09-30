int _sqrt_(int num, int root);
/**
 * _sqrt_recursion - returns the natural square root of n.
 *
 * @n: The no.
 *
 * Return: The result.
 *
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (_sqrt_(n, 2));
}
/**
 * _sqrt_ - returns the natural square root of n.
 *
 * @num: The no.
 * @root: The root.
 *
 * Return: The result.
 *
 */
int _sqrt_(int num, int root)
{
	if (num == root * root)
		return (root);
	if (num > root * root)
		return (_sqrt_(num, root + 1));
	return (-1);
}
