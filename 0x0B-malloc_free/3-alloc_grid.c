#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2-d array of int.
 *
 * @width: The 1st array
 * @height: The 2nd array
 *
 * Return: the 2-d array
 * NULL if it fails.
 */
int **alloc_grid(int width, int height)
{
	int **ga;
	int w, h;

	if (width <= 0 || height <= 0)
		return (NULL);
	ga = malloc(width * 8);
	if (ga == NULL)
	{
		free(ga);
		return (NULL);
	}
	for (h = 0; h < height; h++)
	{
		ga[h] = malloc(width * 8);
		if (ga[h] == NULL)
		{
			for (w = 0; w < h; w++)
				free(ga[w]);
			free(ga);
			return (NULL);
		}
		for (w = 0; w < width; w++)
			ga[h][w] = 0;
	}
	return (ga);
}
