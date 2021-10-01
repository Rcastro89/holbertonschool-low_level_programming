#include <stdio.h>
/**
 * main - funtion do while putchar
 * Return: (0) success
 */
int main(void)
{
	int i = 0;

	do {
		putchar(itoa(i, string, 10));
		i++;
	} while (i != 10);
	return (0);
}
