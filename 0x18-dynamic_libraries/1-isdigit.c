#include "main.h"
#include <ctype.h>

/**
 * _isdigit - return true if number
 * @a: char to evaluate
 * Return: (0) success
 */

int _isdigit(int c)
{

	if (isdigit(c))
	{
		return (1);
	}
	return (0);
}
