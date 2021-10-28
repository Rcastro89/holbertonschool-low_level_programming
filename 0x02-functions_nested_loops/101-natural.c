#include <stdio.h>
#include "main.h"
/**
 * print_natural - add number naturals
 * Return: (d) success
 */
int print_natural(void)
{
	unsigned int a = 1;
	unsigned int b = 0;
	unsigned int c = 0, d = 0, e = 0;
	unsigned int n = 1024;

	do {
		b = 3 * a;
		if (b < n)
		{
			if (b % 5 != 0)
			{
				c = c + b;
			}
			a++;
		}
	} while (b < n);
	b = 0;
	d = c;
	a = 1;
	do {
		b = 5 * a;
		if (b < n)
		{
			e = e + b;
			a++;
		}
	} while (b < n);
	d = d + e;
	return (d);
}
