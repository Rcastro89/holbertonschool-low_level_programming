#include "main.h"
#include<stdio.h>

/**
 * main - check the code.
 * Return: Always 0.
 */
int main(void)
{
    long int i = 0, a = 0, b = 1;
	long int c = 0;

	printf("%ld, %ld, ", a, b);
	for (;i < 50; i++)
	{
		c = a + b;
		a = b;
		b = c;
		if (i < 49)
			printf("%ld, ", c);
		if (i == 49)
			printf("%ld\n", c);
	}
    return (0);
}
