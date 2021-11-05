#include "variadic_functions.h"
/**
 *print_all - funtion to print diferect formats
 *@format: type of data
 */
void print_all(const char *const format, ...)
{
	int i = 0;
	char *p;
	va_list h;

	va_start(h, format);
	if (!format)
	{
		printf("\n");
		return;
	}
	while (format[i])
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(h, int));
			break;
		case 'i':
			printf("%d", va_arg(h, int));
			break;
		case 'f':
			printf("%f", va_arg(h, double));
			break;
		case 's':
			p = va_arg(h, char *);
			p ? printf("%s", p) : printf("(nil)");
			break;
		default:
			i++;
			continue;
		}
		i++;
		if (format[i] != '\0')
			printf(", ");
	}
	printf("\n");
}
