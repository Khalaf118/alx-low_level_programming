/**
 * swap_int - swaps the values of two integers.
 * @a: a pointer to the 1st integer.
 * @b: a pointer to the 2nd integer.
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int s = *a;
	*a = *b;
	*b = s;
}
