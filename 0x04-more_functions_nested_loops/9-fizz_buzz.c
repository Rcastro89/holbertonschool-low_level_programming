#include <stdio.h>
/**
 * main - return fizz or buzz or fizzbuzz
 * Return: (0) success
 */
int main(void)
{
	int i = 1;
	int m3;
	int cont3 = 1;
	int m5;
	int cont5 = 1;

	for (i = 1; i <= 100; i++)
	{
		m3 = 3 * cont3;
		m5 = 5 * cont5;
		if (i == m3)
		{
			if (i == m5)
			{
				printf("FizzBuzz ");
				cont3++;
				cont5++;
			} else
			{
				printf("Fizz ");
				cont3++;
			}
		} else if (i == m5)
		{
			printf("Buzz ");
			cont5++;
		} else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	return (0);
}
