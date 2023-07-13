#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - creates an array
 * @str: identifies the size
 *
 * Return: Nothing.
 */

char *_strdup(char *str);
{
	int i = 0;
	int n = 0;

	while (str[i] != "\0")
	{
		i++;
	}
		char *ptr = malloc(i + 1);

		if (ptr == NULL)
		{
			return (NULL);
		}
		while (n != i)
		{
			ptr[n] = str[n];
			n++;
		}
		return (ptr);
	}
}
