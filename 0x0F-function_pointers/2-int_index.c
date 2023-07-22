#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an
 * array using a custom comparison function.
 * @array: Pointer to an array of integers.
 * @size: Number of elements in the array.
 * @cmp: Pointer to the comparison function.
 *
 * Return: Index of the first matching element,
 * or -1 if no match or invalid size.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && size > 0 && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}
	return (-1);
}
