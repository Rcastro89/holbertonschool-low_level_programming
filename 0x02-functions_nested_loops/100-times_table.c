#include "main.h"
/**
 * print_last_digit - return last number of digit
 * @n: integer that cheked
 * Return: (1) success
 */
void print_times_table(int n)
{
	int i, j, k, l;

	
	l = n + 1;
	for (i = 0; i < l; i++)
	{
		for (j = 0; j < l; j++)
		{
			k = j * i;
			if (j == 0)
			{
				_putchar(k + '0');
			}

			if (k < 10 && j != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar(k + '0');
			} else if (k >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
			}
		}
		_putchar('\n');
	}
}