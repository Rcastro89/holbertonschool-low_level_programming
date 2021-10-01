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

	do {
		putchar(i);
		i++;
	} while (i != 10);
	i = 0;
	do {
		putchar(lt);
		lt++;
		i++;
	} while (i != 6);
	putchar(line);
	return (0);
}
