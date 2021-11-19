#include "main.h"
/**
 * clear_bit - change bit to 0
 * @n: integer
 * @index: index to bit change
 * Return: 1 success -1 fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int conver = 1;

	if (index >= 64)
		return (-1);
	conver = (conver << index);
	conver = ~conver;
	*n = (conver & *n);
	return (1);
}
