#include <stdio.h>
/**
 * print_last_digit - return last number of digit
 * @n: integer that cheked
 * Return: (1) success
 */
void main(int n)
{
	int a;
	int b, c;
	
	for (a = 1; b < n; a++)
	{
		b = 3 * a;
		printf("%i", b);
		printf("\n");
		c = c + b;
	}
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
}
