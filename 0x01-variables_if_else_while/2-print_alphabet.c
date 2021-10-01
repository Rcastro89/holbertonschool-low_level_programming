#include <stdio.h>

int main(void)
{
	char lt = 'a';
	int i = 0;

	do
	{
		putchar(lt);
		lt++;
		i++;
	} while (i!= 26);
	return (0);
}
