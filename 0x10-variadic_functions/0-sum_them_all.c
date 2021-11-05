#include "variadic_functions.h"
/**
 * sum_them_all - list indefine
 * @n: start list
 * Return: (t) success
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, t;

	if (n == 0)
	return (0);
	va_start(ap, n);
	t = n;
	for (i = 0; i < n ; i++)
	{
		t += va_arg(ap, int);
	}
	va_end(ap);
	return (t);
}
