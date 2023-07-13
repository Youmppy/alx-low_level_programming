#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - creates an array with 2 strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: Nothing.
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int n = 0;
	int k = 0;
	int l = 0;
	char *ptr;

	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[n] != '\0')
	{
		n++;
	}
	if (s1 == 0 && s2 == 0)
	{
		return (NULL);
	}
	else
	{
		ptr = malloc(i + n);
		if (ptr == NULL)
		{
			return (NULL);
		}

		while (k != i)
		{
			ptr[k] = s1[k];
			k++;
		}
		while (l != n)
		{
			ptr[k] = s1[l]
			l++;
			k++;
		}
		return (ptr);
	}
}
