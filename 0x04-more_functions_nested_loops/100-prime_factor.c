#include <stdio.h>
#include <math.h>

/**
 * main  number 612852475143
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int num;
	long int r;
	long int i;

	num = 612852475143;
	r = -1;

	while (num % 2 == 0)
	{
		r = 2;
		num /= 2;
	}

	for (i = 3; i <= sqrt(num); i = i + 2)
	{
		while (num % i == 0)
		{
			r = i;
			num = num / i;
		}
	}

	if (num > 2)
		r = num;

	printf("%ld\n", r);

	return (0);
}