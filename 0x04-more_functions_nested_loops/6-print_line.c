#include "main.h"
/**
 * print_line - print line
 * @n: numbers of lines to print
 */
void print_line(int n)
{
	int i;

	if (n != 0)
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
