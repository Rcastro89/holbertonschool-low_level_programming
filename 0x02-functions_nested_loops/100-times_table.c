#include <stdio.h>
#include "main.h"
/**
 * print_times_table - multiplic
 * @n: integer that cheked
 */
void print_times_table(int n)
{
	int i, j, k, l;

	if (n <= 15)
	{
	l = n + 1;
	for (i = 0; i < l; i++)
	{
		for (j = 0; j < l; j++)
		{
			k = j * i;
			if (j == 0)
			{
				printf("%i", k);
			}

			if (k < 10 && j != 0)
			{
				printf(",   %i", k);
			} else if (k >= 10 && k < 100)
			{
				printf(",  %i", k);
			} else if (k >= 100)
			{
				printf(", %i", k);
			}
		}
		printf("\n");
	}
	}
}
