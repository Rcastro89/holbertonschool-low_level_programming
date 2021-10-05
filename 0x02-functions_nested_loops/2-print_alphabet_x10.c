#include "main.h"
/**
 * print_alphabet_x10 - alphabeth x10
 * Return: (0) success
 */
void print_alphabet_x10(void)
{
	int i;
	int j;
	char lt;

	for (i = 0; i < 10; i++)
	{
		lt = 'a';
		for (j = 0; j < 26; j++)
		{
			_putchar(lt);
			lt++;
		}
		_putchar('\n');
		}
}
