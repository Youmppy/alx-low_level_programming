#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: concatenated string, or NULL if memory allocation fails.
 */
char *str_concat(char *s1, char *s2)
{
	char *array;
	int i = 0;
	int c1 = 0;
	int c2 = 0;

	for (c1 = 0; s1[c1] != '\0'; c1++)
		;
	for (c2 = 0; s2[c2] != '\0'; c2++)
		;

	array = malloc(c1 + c2 + 1);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < c1; i++)
		array[i] = s1[i];
	for (c1 = 0; c1 < c2; c1++)
	{
		array[i] = s2[c1];
		i++;
	}

	i++;

	array[i] = '\0';

	return (array);
}
