#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - creates a duplicate of a string
 * @str: string to duplicate
 *
 * Return: Pointer to the duplicated string, or NULL if it fails
 */
char *_strdup(char *str)
{
	int i = 0;
	int n = 0;
	char *ptr;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		i++;
	}

	ptr = malloc((i + 1) * sizeof(char));

	if (ptr == NULL)
	{
		return (NULL);
	}

	while (n < i)
	{
		ptr[n] = str[n];
		n++;
	}
	ptr[n] = '\0';

	return (ptr);
}
