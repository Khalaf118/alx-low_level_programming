#include <stddef.h>
/**
 * int_index - searches for an integer.
 * @array: the array
 * @size: number of elements in the array
 * @cmp: function ptr to be used to compare values
 *
 * Return: the index of the first element for
 * which the cmp function does not return 0
 *
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
