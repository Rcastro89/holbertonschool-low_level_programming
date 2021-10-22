#include"main.h"
/**
* main - myname
* @argc: numers of arguments
* @argv: matriz unideminsional
* Return: (0) success
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	printf("%s\n", argv[i]);
	return (0);
}
