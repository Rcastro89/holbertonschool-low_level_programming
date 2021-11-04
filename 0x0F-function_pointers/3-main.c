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
	char *op;
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	op = argv[2];
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	if (*op != '+' && *op != '-' && *op != '*' &&
		*op != '/' && *op != '%')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*op == '/' || *op == '%') && (b == 0))
	{
		printf("Error\n");
		exit(100);
	}
	result = get_op_func(op)(a, b);
	printf("%d\n", result);
	return (0);
}
