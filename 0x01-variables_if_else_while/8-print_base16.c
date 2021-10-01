#include <stdio.h>
/**
 * main - funtion do while putchar
 * Return: (0) success
 */
int main(void)
{
	char lt = 'a';
	char line = '\n';
	int i = 0;
	int n;
	
	for (n =38; n < 48; n++)
	{
		putchar(n);
	}
	do {
		putchar(lt);
		lt++;
		i++;
	} while (i != 6);
	putchar(line);
	return (0);
}
