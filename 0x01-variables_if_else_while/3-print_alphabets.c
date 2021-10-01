#include <stdio.h>
/**
 * main - funtion do while putchar
 * Return: (0) success
 */
int main(void)
{
	char lt = 'a';
	char ltup = 'Z';
	char line = '\n';
	int i = 0;

	do {
		putchar(lt);
		lt++;
		i++;
	} while (i != 26);
	i = 0;
	do {
		putchar(ltup);
		ltup++;
		i++;
	} while (i != 26);
	putchar(line);
	return (0);
}
