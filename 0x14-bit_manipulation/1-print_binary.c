#include "main.h"
/**
 * conver - print binary
 * @n: unsigned int given.
 */

void conver(unsigned long int n)
{
	if (n == 0)
		return;
	conver(n >> 1);
	_putchar((n & 1) + '0');
}
/**
 * print_binary - conver 10 to 2
 * @n: Number to represent in binary.
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	conver(n);
}
