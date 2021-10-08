#include "main.h"
/**
 * print_diagonal - print diagonal
 * @n: numbers of diagonals to print
 */
void print_diagonal(int n)
{
	int i;
	int j;

	for (i = 1; i <= n; i++)
	{
		if (i != 1)
		{
			for (j = 1; j <= i; j++)
			{
				_putchar(' ');
			}
		}
		_putchar('\\');
		_putchar('\n');
	}
	_putchar('\n');
}
