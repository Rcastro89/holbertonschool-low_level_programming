#include <stdio.h>
/**
 * main - funtion do while putchar
 * Return: (0) success
 */
int main(void)
{
	int i = 0;

	do {
		putchar(i);
		i++;
	} while (i != 10);
	return (0);
}
