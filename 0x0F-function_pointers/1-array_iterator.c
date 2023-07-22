#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - prints function with array
 * @array: array
 * @size: size
 * @action: action function
 *
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i = 0;

	if (array && size && action != NULL)
	{
		for(i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
