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
	int q;

	for (n = 48; n <= 56; n++)
	{
		for (m = 48; m <= 56; m++)
		{
			for (o = 48; o <= 56; o++)
			{
				for (q = 49; q <=57; q++)
				{
					putchar(n);
					putchar(m);
					if (n != 57 || m != 57)
					{
						putchar(' ');
					}
					if (q > o)
					{
						putchar(q);
						putchar(o);
						if (o != 56 || m != 57)
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
