/**
 * _pow_recursion - returns the value of x
 * raised to the power of y.
 *
 * @x: The no to be raised.
 * @y: The power number.
 *
 * Return: The result.
 *
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (x == 0)
		return (0);
	if (y == 0 || x == 1)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
