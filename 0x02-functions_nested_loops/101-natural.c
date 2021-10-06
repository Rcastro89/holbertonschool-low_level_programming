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
	
	n = 10;
	do
	{
		b = 3 * a;
		if (b < n)
		{
			printf("%i", b);
			printf("\n");
			c = c + b;
			a++;
		}
	} while (b < n);
	b = 0;
	printf("\n");
	for (a = 1; b < n; a++)
	{
		b = 5 * a;
		printf("%i", b);
		printf("\n");
		c = c + b;
	}
	printf("The sum of these multiples is %i ", c);
	printf("\n");
	return (c);
}
