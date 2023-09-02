#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array containing the command-line arguments.
 *
 * Return: 0 on success.
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
		for (i = 0; i < argc; i++)
		{
			for (c = argv[i]; *c < 0 || *c > 9; c++)
			{
				printf("Error\n");
				return (1);
			}
			s +=  atoi(argv[i]);
		}
	printf("%d\n", s);
	}

	return (0);
}

