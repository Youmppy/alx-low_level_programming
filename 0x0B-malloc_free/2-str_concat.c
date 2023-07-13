#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - creates an array with 2 strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: Pointer to the concatenated string, or NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, k = 0;
	char *concatenated;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;

	concatenated = malloc((i + j + 1) * sizeof(char));
	if (concatenated == NULL)
		return (NULL);

	while (*s1 != '\0')
		concatenated[k++] = *s1++;

	while (*s2 != '\0')
		concatenated[k++] = *s2++;

	concatenated[k] = '\0';

	return (concatenated);
}
