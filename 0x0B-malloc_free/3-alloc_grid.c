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

	ma = (int **) malloc(sizeof(int *) * width);
	if (ma == NULL)
	return (NULL);
	for (i = 0; i < width; i++)
	{
		ma[i] = malloc(sizeof(int) * height);
	}
	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			ma[i][j] = 0;
		}
	}
	return (ma);
}
