#include "main.h"
#include <stdio.h>

/**
 * string_nconcat - add 2 str
 * @s1: str 1
 * @s2: str 2
 * @n: length
 * Return: 0
 */

char *string_nconcat(char *s1, char *s2, unsigned int n);
{
	int i = 0;
	char *ptr;

	ptr = malloc(n * 2);

	if (ptr == NULL)
	{
		exit(NULL);
	}

	while (i != n)
	{
		ptr[i] = s1[i];
		i++;
	}
	i = 0;
	while (i != n)
	{
		ptr[i] = s2[i];
		i++;
	}

	exit(ptr);
}
