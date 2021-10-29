#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * array_range - grid of integers
 * @min: int minimun
 * @max: int max
 * Return: (ma) pointer created
*/
int *array_range(int min, int max)
{
	int *ma;
	int i;

	if (min > max)
		return (NULL);

	ma = (int *) malloc((sizeof(int) * max) + 1);
	if (ma == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
		ma[i] = i;
	return (ma);
}

