#include"main.h"
#include<stdio.h>
#include<stdlib.h>
/**
* main - multiplicate numbers
* @argc: numers of arguments
* @argv: matriz unideminsional
* Return: (0) success
*/
int main(int argc, char *argv[])
{
	int i;
	int j;
	int k;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]);
	j = atoi(argv[2]);

	printf("%d\n", (k = i * j));
	return (0);
}
