#include "main.h"
/**
 * set_bit - change bit to 1
 * @n: integer
 * @index: index to bit change
 * Return: 1 success -1 fail
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int b = 1, i;

	if (index >= 64)
		return (-1);
	for (i = 0; i < index; i++)
		b = b * 2;
	*n = (*n | b);
	return (1);
}
