#include "function_pointers.h"
/**
 * array_iterator - print integer on array
 * @array: array of integer
 * @size: size
 * @action: pointer to function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;
	void (*fun_ptr)(int) = action;

	for (i = 0; i < size; i++)
		(*fun_ptr)(array[i]);
}
