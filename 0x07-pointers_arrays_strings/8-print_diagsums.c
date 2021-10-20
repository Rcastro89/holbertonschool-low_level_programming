#include"main.h"
/**
* print_diagsums - print diagonal
* @a: matriz
* @size: size of array
*/
void print_diagsums(int *a, int size)
{
	int len = size * size;
	int i;
	int dg1 = 0;
	int dg2 = 0;

	for (i = 0; i <= len;)
	{
		dg1 = dg1 + a[i];
		i = (i + size + 1);
	}
	for (i = size - 1; i < (len - 2);)
	{
		dg2 = dg2 + a[i];
		i = (i + size - 1);
	}
	printf("%d, %d\n", dg1, dg2);
}
