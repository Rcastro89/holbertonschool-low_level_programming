#include"main.h"
/**
* calculate_square_root - calculate square root
* @num: integer to evaluate
* @cal: number calculate
* Return: (cal) success
*/
int calculate_square_root(int num, int cal)
{
	if (cal * cal == num && cal)
	return (cal);
	if (cal < num)
	return (calculate_square_root(num, cal + 1));
	return (-1);
}
/**
* _sqrt_recursion - square
* @n: integer
* Return: (square root) success
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
	return (-1);
	return (calculate_square_root(n, 1));
}
