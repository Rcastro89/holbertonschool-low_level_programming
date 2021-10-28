#include "main.h"
#include<stdio.h>

/**
 * main - check the code.
 * Return: Always 0.
 */
int main(void)
{
    int i = 0, a = 0, b = 1;
	unsigned long int c = 0;

	printf("%d, %d, ", a, b);
	for (;i < 50; i++)
	{
		c = a + b;
		a = b;
		b = c;
		if (i != 50)
			printf("%ld, ", c);
		if (i == 50)
			printf("%ld\n", c);
	}
    return (0);
}