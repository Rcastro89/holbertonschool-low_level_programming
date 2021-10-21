#include"main.h"
/**
* is_prime_number - return 1 if the number is prime
* primos - calculate prime
* @n: integer to evaluate
* @x: value to x
* @div: divisor
* Return: (1 or 0) case
*/
int primos(int x, int div)
{
    if (x % div == 0 && x > div)
    return(1 + primos(x, div + 1));
    if (x % div == 0 && x == div)
    return(1);
    return(primos(x, div + 1));
}

int is_prime_number(int n)
{
    if (n < 0)
    return(0);
    if (primos(n, 1) == 2)
    return(1);
    return(0);
}
