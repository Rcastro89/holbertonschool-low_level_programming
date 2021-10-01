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
		if (lt != 'e')
		{
			if (lt != 'q')
			{
				putchar(lt);
				lt++;
				i++;
			}
		}
	} while (i != 26);
	return (0);
}
