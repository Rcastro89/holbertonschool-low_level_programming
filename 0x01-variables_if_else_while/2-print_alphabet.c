#include <stdio.h>

int main(void)
{
	char lt = 'a';
	char line = '\n';
	int i = 0;

	do
	{
		putchar(lt);
		lt++;
		i++;
	} while (i!= 26);
	putchar(line);
	return (0);
}
