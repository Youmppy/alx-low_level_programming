#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * argstostr - Concatenates all the arguments of your program.
 * @ac: The number of arguments.
 * @av: An array of pointers to the arguments.
 *
 * Return:the concatenated string, or NULL if memory allocation fails.
 */
char *argstostr(int ac, char **av)
{
	int i, j, len = 0, total_len = 0;
	char *array, *concatenated;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
		total_len += len + 1; /* Add 1 for the newline character */
		len = 0;
	}

	concatenated = malloc(total_len * sizeof(char) + 1);

	if (concatenated == NULL)
		return (NULL);

	array = concatenated;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			*array = av[i][j];
			array++;
		}
		*array = '\n'; /* Add a newline character after each argument */
		array++;
	}

	return (concatenated);
}
