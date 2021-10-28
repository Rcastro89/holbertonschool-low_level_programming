#include "main.h"
#include<stdio.h>

/**
 * main - check the code.
 * Return: Always 0.
 */
int main(void)
{
	long long int i = 2, a = 1, b = 2;
	long long int c = 0;

	printf("%ld, %ld, ", a, b);
	for (; i < 98; i++)
	{
		c = a + b;
		a = b;
		b = c;
		if (i < 97)
			printf("%ld, ", c);
		if (i == 97)
			printf("%ld\n", c);
	}
	return (0);
}
