#include "main.h"
/**
* reverse_array - write array reverse
* @a: array
* @n: size array
*/
void reverse_array(int *a, int n)
{
	int i, j, temp;

	i = 0;
	j = n - 1;
	for (; j  >= (n / 2); ++i, j--)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}
