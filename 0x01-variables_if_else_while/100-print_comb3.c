#include <stdio.h>
/**
 * main - funtion for putchar
 * Return: (0) success
 */
int main(void)
{
	int n;
	int m;

	for (n = 48; n < 58; n++)
	{ 
		for (m = 48; m < 58; m++)
		{
			if (n != m)
			{
				if (n < m)
				{
					putchar(n);
					putchar(m);
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
