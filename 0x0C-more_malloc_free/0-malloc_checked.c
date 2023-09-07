#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc.
 * @b: The size of the memory to allocate.
 *
 * Description: This function allocates a block of memory of size 'b' using
 * malloc. If malloc fails to allocate memory, it terminates the program with
 * exit status 98.
 *
 * Return: A pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	char *array;

	array = malloc(b);
	if (array == NULL)
		exit(98);

	return (array);
}
