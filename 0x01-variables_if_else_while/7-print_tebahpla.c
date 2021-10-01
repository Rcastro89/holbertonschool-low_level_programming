#include <stdio.h>
/**
 * main - funtion do while putchar
 * Return: (0) success
 */
int main(void)
{
	char lt = 'z';
	char line = '\n';
	int i = 0;

	do {
		putchar(lt);
		lt--;
		i++;
	} while (i != 26);
	putchar(line);

	return (0);
}
