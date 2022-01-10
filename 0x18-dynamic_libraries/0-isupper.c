#include "main.h"
#include <ctype.h>

/**
 * _isupper - return true if uppcase leter
 * @a: char to evaluate
 * Return: (0) success
 */

int _isupper(int c)
{

	if (isupper(c))
	{
		return (1);
	}
	return (0);
}
