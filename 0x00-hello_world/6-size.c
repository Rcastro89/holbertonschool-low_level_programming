#include<stdio.h>



int main(void)
{
	printf("Size of a char: %zd byte(s)", sizeof (char));
	printf("Size of an int: %zd byte(s)", sizeof (int));
	printf("Size of a long int: %zd byte(s)", sizeof (long int));
	printf("Size of a long long int: %zd byte(s)", sizeof (long long int));
	printf("Size of a float: %zd byte(s)", sizeof (float));
	return (0);
}
