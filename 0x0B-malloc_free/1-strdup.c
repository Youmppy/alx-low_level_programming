#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Duplicates a string to a new memory space location.
 * @str: The string to be duplicated.
 *
 * Return: A pointer to the duplicated string, or NULL if memory allocation fails.
 */
char *_strdup(char *str)
{
	char *array;
	int i = 0;
	int b = 0;

	if (str == NULL)
		return (NULL);

	for (b = 0; str[b] != '\0'; b++)
		;

	array = malloc(b + 1);
	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i != b; i++)
	{
		array[i] = str[i];
	}
	array[i] = '\0';

	return (array);
}
