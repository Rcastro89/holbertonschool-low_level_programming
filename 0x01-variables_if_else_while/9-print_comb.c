#include <stdio.h>
/**
 * main - funtion do while putchar
 * Return: (0) success
 */
int main(void)
{
	char line = '\n';
	int i = 0;

	do {
		printf("%d", i);
		i++;
	} while (i != 10);
	putchar(line);
	return (0);
}
