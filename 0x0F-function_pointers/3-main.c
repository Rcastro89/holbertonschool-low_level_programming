#include "3-calc.h"
/**
 * main - calculate
 * @argc: number of arguments
 * @argv: array arguments
 * Return: (0) success
 */
int main(int argc, char *argv[])
{
	int a;
	int b;
	int (*pointer)(int, int);
	int res;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	pointer = get_op_func(argv[2]);
	if (!pointer)
	{
		printf("Error\n");
		exit(99);
	}
	if ((*argv[2] == '/' || *argv[2] == '%') && (*argv[3] == 0))
	{
		printf("Error\n");
		exit(100);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	res = pointer(a, b);
	printf("%d\n", res);
	return (0);
}
