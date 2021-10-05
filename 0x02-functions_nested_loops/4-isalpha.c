#include "main.h"
/**
 * _isalpha - return lowercase or uppercase character
 * @c: integer that cheked
 * Return: (1) success
 */
int _isalpha(int c)
{
	return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));
}
