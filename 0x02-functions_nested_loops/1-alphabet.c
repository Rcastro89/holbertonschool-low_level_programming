#include "main.h"
/**
 * print_alphabet - alphabeth
 * Return: (0) success
 */
void print_alphabet(void)
{
	int i = 0;
	int l = 97;
	char lt;

	do {
		lt = l;
		_putchar(lt);
		l++;
		i++;
		} while (i != 26);
		_putchar('\n');
		return (0);
		}
