#include"main.h"
#include<stdlib.h>
/**
 * alloc_grid - grid of integers
 * @width: int width
 * @height: int height
 * Return: () pointer created
*/
int **alloc_grid(int width, int height)
{
	int i, j;
	int **ma;

	if (height <= 0 || width <= 0)
	return (NULL);
	ma = (int **) malloc(sizeof(int *) * width);
	if (ma == NULL)
	return (NULL);
	for (i = 0; i < width; i++)
	{
		ma[i] = (int *) malloc(sizeof(int) * height);
		if (ma[i] == NULL)
		{
			free(ma);
			return (NULL);
		}
	}
	for (i = 0; i <= width; i++)
	{
		for (j = 0; j <= height; j++)
		{
			ma[i][j] = 0;
		}
	}
	return (ma);
}
