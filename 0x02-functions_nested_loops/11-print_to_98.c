#include "main.h"
/**
 * print_to_98 - to 98
 * @n: integer
 * Return: Always 0.
 */
void print_to_98(int n)
{
	int x;
	int y;
	int z;

	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			if (n < 10 && n >= 0)
			{
				_putchar(n + '0');
			} else if (n >= 10 && n < 100)
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
			} else if (n <  0 && n > -10)
			{
				_putchar('-');
				x = n * -1;
				_putchar(x + '0');
			} else if (n <= -10)
			{
				_putchar('-');
				x = n * -1;
				_putchar((x / 10) + '0');
				_putchar((x % 10) + '0');
			}
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	} else
	{
		for (; n >= 98; n--)
		{
			if (n >= 100)
			{
				x = n / 100;
				y = n / 10;
				z = y % 10;
				_putchar(x + '0');
				_putchar(z + '0');
				_putchar((n % 10) + '0');

			} else if (n < 100)
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
			}
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}

		}
	}
	_putchar('\n');

}
