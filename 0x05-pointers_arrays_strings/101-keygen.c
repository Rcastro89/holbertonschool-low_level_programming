#include <time.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * main - keygen
 * Return: (0) 
 */
 int main(void)
{
	int count;
	int x;
	int calc, calc1;

	calc = 127;
	calc1 = 2772;
	x = 0;

	srand(time(0));
	while (x < calc1 - calc)
	{
		count = rand() % calc;
		if (count > 32)
		{
			putchar(count);
			x = x + count;
		}
	}
	putchar(calc1 - x);
	return (0);
}
