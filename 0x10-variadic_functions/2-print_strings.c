#include "variadic_functions.h"
/**
 * print_strings - print list of the strings
 * @n: count
 * @separator: char
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *c;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		c = va_arg(ap, char *);
		if (c == NULL)
			c = "(nil)";
		if (i < n - 1 && separator != NULL)
		printf("%s%s", c, separator);
		else
		printf("%s", c);
	}
	printf("\n");
	va_end(ap);
}
