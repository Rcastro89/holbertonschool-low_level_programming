#include "main.h"
/**
 * jack_bauer - return minutes and secons of the day
 */
void jack_bauer(void)
{
	int m, s;

	m = 0;

	do {
		s = 0;
		do {
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar(':');
			_putchar((s / 10) + '0');
			_putchar((s % 10) + '0');
			_putchar('\n');
			s++;
		} while (s < 60);
		m++;
	} while (m < 24);
}
