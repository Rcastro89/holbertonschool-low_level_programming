#include"main.h"
/**
* print_chessboard - print chessboard
* @a: matriz
*/
void print_chessboard(char (*a)[8])
{
	int i, j;

	i = 0;
	for (; i < 8; i++)
	{
		for (j = 0; j <= 8; j++)
		{
			if (j != 8)
			_putchar(a[i][j]);
			if (j == 8)
			_putchar('\n');
		}
	}
}
