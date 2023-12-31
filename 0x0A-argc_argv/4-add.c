#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array containing the command-line arguments.
 *
 * Return: 0 on success, 1 on error.
 */
int main(int argc, char *argv[])
{
	int i = 0;
	char *c;
	int s = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (c = argv[i]; *c != '\0'; c++)
			{
				if (*c < '0' || *c > '9')
				{
					printf("Error\n");
					return (1);
				}
			}
			s += atoi(argv[i]);
		}
		printf("%d\n", s);
	}

	return (0);
}
