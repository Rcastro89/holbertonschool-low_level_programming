#include "main.h"
/**
 * binary_to_uint - convert binari to decimal
 * @b: binari to evaluate
 * Return: decimal
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int one = 2, sum = 0;
	int i, j, lenght = 0, multi = 0;

	if (b == NULL)
		return (0);
	lenght = strlen(b) - 1;
	multi = lenght;
	for (i = 0; i <= lenght; i++, multi--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '1')
		{
			for (j = 1; j < multi; j++)
				one = one * 2;
			if (i != lenght)
				sum += one;
			else
				sum += 1;
			one = 2;
		}
	}
	return (sum);
}
