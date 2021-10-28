#include <stdio.h>
/**
 * main - return last number of digit
 * Return: (0) success
 */
int main(void)
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
	printf("%d\n", d);
	return (0);
}
