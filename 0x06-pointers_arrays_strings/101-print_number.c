#include"main.h"
#include<stdio.h>
/**
* print_number - print integer
* @n: integer check
*/
void print_number(int n)
{
	unsigned int i, e, d, div, t, x, y;

	if (n == 0)
	{
		_putchar('0');
		n = n * -1;
	}
	else
	{
		i = n;
		t = 0;
		while (i != 0)
		{
			i = i / 10;
			t++;
		}
		if (n < 0)
		{
			_putchar('-');
			n = n * -1;
		}
		x = t - 1;
		for (div = 1; x != 0; x--)
		div = div * 10;
		y = n;
		d = n;
		while (t != 0)
		{
			e = y / div;
			d = d % div;
			y = d;
			t--;
			div = div / 10;
			_putchar(e + '0');
		}
	}
}
