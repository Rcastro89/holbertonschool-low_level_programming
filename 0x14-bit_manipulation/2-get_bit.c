#include "main.h"
/**
 * get_bit - search bit on index
 * @n: dec evaluate
 * @index: index searched
 * Return: 1 or 0
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int ret;

	if (n == 0 || index < 0)
		return (-1);
	ret = (n >> (index));
	ret = (ret & 1);
	return (ret);
}
