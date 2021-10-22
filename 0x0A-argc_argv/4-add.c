#include"main.h"
#include<stdio.h>
#include<stdlib.h>
#include <ctype.h>
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

	if (argc < 3)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		k =(atoi(argv[i]));
		if (k == 0)
		{
			printf("Error\n");
			return (1);
		} else
		{
			j = j + atoi(argv[i]);
		}
		
	}
	
	printf("%d\n", j);
	return (0);
}