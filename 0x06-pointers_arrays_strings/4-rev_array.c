#include "main.h"
/**
* reverse_array - write array reverse
* @a: array
* @n: size array
*/
void reverse_array(int *a, int n)
{
	int j, i;
	int temp[100];

	j = n;
	i = 0;
	while (j != 0)
	{
		temp[i] = a[j - 1];
		j--;
		i++;
	}
	j = n;
	i = 0;
	while (j != 0)
	{
		a[i] = temp[i];
		i++;
		j--;
	}
}
