#include"main.h"
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
/**
* main - multiplicate numbers
* @argc: numers of arguments
* @argv: matriz unideminsional
* Return: (0) success
*/
int main(int argc, char *argv[])
{
	int i;
	int j = 0;
	int k;
	int c;

	if (argc < 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{	c = 1;
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if ((isdigit(argv[i][j]) == 0 && argv[i][j] != '0'))
			{
				c = 0;
			}
		}
		if (c == 0)
		{
			printf("Error\n");
			return (1);
		}
		k = k + atoi(argv[i]);
	}
	printf("%d\n", k);
	return (0);
}
