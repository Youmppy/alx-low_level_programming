#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int i = 1;
	int n = 0;
	int error = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	while (i < argc)
	{
		int j = 0;

		while (argv[i][j] != '\0')
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				error = 1;
				break;
			}
			j++;
		}

		if (error)
		{
			printf("Error\n");
			return (1);
		}

		n = n + atoi(argv[i]);
		i++;
	}

	printf("%d\n", n);
	return (0);
}
