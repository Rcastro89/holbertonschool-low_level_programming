#include"main.h"
/**
* _print_rev_recursion - reverse
* @s: string to value
*/
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
