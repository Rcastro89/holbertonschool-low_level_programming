#include "function_pointers.h"
/**
 * print_name - print the name according to the parameter
 * @name: name to print
 * @f: function called
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	void (*fun_ptr)(char *) = f;
	(*fun_ptr)(name);
}
