#include "main.h"
#include<stdio.h>

/**
 * main - check the code.
 * Return: Always 0.
 */
int main(void)
{
	long int a = 1, b = 2, d = 2;
	long int c = 0;

	for (; c <= 4000000;)
	{
		c = a + b;
		a = b;
		b = c;
		if (c % 2 == 0)
			d = d + c;
	}
	printf("%ld\n", d);
	return (0);
}
