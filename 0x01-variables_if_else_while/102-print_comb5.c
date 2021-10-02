#include <stdio.h>

int main(void)
{
	int a;
	int b;
	int c;
	int d;

	for (a = 48; a < 58; a++)
	{
		for (b = 48; b < 58; b++)
		{
			for (c = 48; c < 58; c++)
			{
				for (d = 48; d < 58; d++)
				{
					if (a <= b)
					{
						if (b <= c)
						{
						       if (c <=d)
						       {
							       if (d != 57 || c != 57 || b != 57 || a != 57)
							       {
								       	putchar(a);
									putchar(b);
									putchar(' ');
									putchar(c);
									putchar(d);
									if (d != 57 || c != 57 || b != 57 || a != 56)
									{	
										putchar(',');
										putchar(' ');
									}
							       }
							}
						}
					}
					
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
