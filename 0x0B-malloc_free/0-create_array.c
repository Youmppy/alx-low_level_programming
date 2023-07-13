#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */

char *create_array(unsigned int size, char c)
{
	int i = 1;
	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		char *ptr = malloc(size);
		while (i < size)
		{
			ptr[i] = c;
			i++
		}
	}
}
