#include "main.h"
/**
 * print_sign - return number
 * @n: integer that cheked
 * Return: (1) success
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		_putchar(' ');
		return (1);
	} else if (n < 0)
	{
		_putchar('-');
		_putchar(' ');
		return (-1);
	} else if (n == 0)
	{
		_putchar('0');
		_putchar(' ');
		return (0);
	}
	return (0);
}
