#include"main.h"
/**
* _pow_recursion - pow of a integer
* @x: integer
* @y: pow
* Return: (pow of x)
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
	return (-1);
	if (y != 0)
	return (x * _pow_recursion(x, y - 1));
	return (1);
}
