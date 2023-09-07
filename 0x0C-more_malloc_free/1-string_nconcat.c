#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - Concatenates two strings up to n characters from s2.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of chars from s2 to concatenate.
 *
 * Return: A pointer to the concatenated string or NULL on memory failure.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *array;
	int i = 0;
	int c1 = 0;
	int c2 = 0;

	if (s1 && s2)
	{
		for (c1 = 0; s1[c1] != '\0'; c1++)
			;
		for (c2 = 0; s2[c2] != '\0'; c2++)
			;
	}
	if (s1 && !s2)
		for (c1 = 0; s1[c1] != '\0'; c1++)
			;
	if (!s1 && s2)
		for (c2 = 0; s2[c2] != '\0'; c2++)
			;
	array = malloc(c1 + c2 + 1);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < n; i++)
		array[i] = s1[i];
	for (c1 = 0; c1 < n; c1++)
	{
		array[i] = s2[c1];
		i++;
	}
	i++;
	array[i] = '\0';
	return (array);
}
