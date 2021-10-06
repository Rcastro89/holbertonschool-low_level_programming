#include <stdio.h>
/**
 * print_last_digit - return last number of digit
 * @n: integer that cheked
 * Return: (1) success
 */
int main(void)
{
	int a = 1;
	int b = 0;
	int c, n;
	
	n = 1024;
	do
	{
		b = 3 * a;
		if (b < n)
		{
			c = c + b;
			a++;
		}
	} while (b < n);
	b = 0;
	for (a = 1; b < n; a++)
	{
		b = 5 * a;
		if (b < n)
		{
			c = c + b;
			a++;
		}
	}
	printf("%i", c);
	printf("\n");
	return (c);
}
