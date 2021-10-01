#include <stdio.h>
/**
 * main - funtion for putchar
 * Return: (0) success
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		if (n != 58)
		{
			putchar(n);
			putchar(',');
			putchar(' ');
		} else 
		{
			putchar(n);
		}
	}
	return (0);
}
