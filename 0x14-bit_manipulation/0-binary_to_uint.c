#include "main.h"
/**
 * binary_to_uint - convert binari to decimal
 * @b: binari to evaluate
 * Return: decimal
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int one = 0, sum = 0;
	int lenght = 0, multi = 1;

	if (b == NULL)
		return (0);
	lenght = strlen(b) - 1;
	for (; lenght >= 0; lenght--)
	{
		if (b[lenght] != '0' && b[lenght] != '1')
			return (0);
		one = (b[lenght] - '0') * multi;
		sum += one;
		multi = multi * 2;
	}
	return (sum);
}
