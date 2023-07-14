#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - creates an array
 * @b: int
 *
 * Return: Nothing.
 */

void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit (98);
	}
	return (ptr);
}
