#include "main.h"
/**
 * swap_int - change for pointer
 * @a: pointer int 1
 * @b: pointer int 2
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
