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
	int i, cal;

	if (min > max)
		return (NULL);

	cal = max - min;
	ma = malloc((sizeof(int) * cal) + 1);
	if (ma == NULL)
		return (NULL);
	for (i = 0; i <= cal; i++)
	{
		ma[i] = min;
		min++;
	}
	return (ma);
}
