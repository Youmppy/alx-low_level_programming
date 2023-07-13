#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array
 * @size: identifies the size
 * @c: char
 *
 * Return: Nothing.
 */

char *create_array(unsigned int size, char c)
{
	int i = 0;

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
			i++;
		}
		return (ptr);
	}
}
