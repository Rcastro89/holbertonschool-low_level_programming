#include <stdio.h>
/**
 * main - funtion for putchar
 * Return: (0) success
 */
int main(void)
{
	int m;
	int n;
	int o;

	for (n = 48; n <= 56; n++)
	{
		for (m = 49; m <= 57; m++)
		{ 
			for (o = 50; o <=58; o++)
			{
				if (m > n && o > m)
				{
					putchar(n);
					putchar(m);
					putchar(o);
					if (n != 56 || m != 57 || o != 58)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
