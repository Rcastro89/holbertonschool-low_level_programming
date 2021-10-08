#include "main.h"
#include <ctype.h>

/**
 * _isdigit - return true if number
 * @a: char to evaluate
 * Return: (0) success
 */

int _isdigit(char a)
{

	if (isdigit(a))
	{
		return (1);
	}
	return (0);
}
