#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - funtion do while putchar
 * Return: (0) success
 */
int main(void)
{
	int i = 0;
	char a;

	do {
		a = itoa(i);
		printf("%s", a);
		i++;
	} while (i != 10);
	return (0);
}
