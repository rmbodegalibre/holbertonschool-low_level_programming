#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 *         Each element of the grid should be initialized to 0
 * @width: The width of the 2-dimensional array.
 * @height: The height of the 2-dimensional array.
 *
 * Return: NULL on failure
 *         NULL If width or heiIf IS 0 or negative
 */
int **alloc_grid(int width, int height)
{
	int **d2;
	int h_idx, w_idx;

	if (width <= 0 || height <= 0)
	return (NULL);

	d2 = malloc(sizeof(int *) * height);

	if (d2 == NULL)
	return (NULL);

	for (h_idx = 0; h_idx < height; h_idx++)
	{
	d2[h_idx] = malloc(sizeof(int) * width);

	if (d2[h_idx] == NULL)
	{

	for (; h_idx >= 0; h_idx--)
	free(d2[h_idx]);

	free(d2);
	return (NULL);
	}
	}

	for (h_idx = 0; h_idx < height; h_idx++)
	{
	for (w_idx = 0; w_idx < width; w_idx++)
	d2[h_idx][w_idx] = 0;
	}

	return (d2);
}
