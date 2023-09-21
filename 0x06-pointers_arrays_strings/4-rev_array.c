/**
 * reverse_array - reverses the content of an a of integers.
 * @a: a pointer to the array.
 * @n: The number of elements of the array
 *
 *
 * Return: void
 *
 */
void reverse_array(int *a, int n)
{
	int i;
	int swap;

	for (i = 0; i < (n / 2); i++)
	{
		swap = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = swap;
	}
}
