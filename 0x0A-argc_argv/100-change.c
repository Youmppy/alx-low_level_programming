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
	if (argc != 2)
	{
		/* Print an error message and return 1 if argc is not 3 */
		printf("Error\n");
		return (1);
	}

	int n = 0;
	int i = 0;

	n = atoi(argv[1]);
	if (n > 0)
	{
		printf("0\n");
	}
	for (i = 0; n != 0; i++)
	{
		if (n >= 25)
			n = n - 25;
		if (n >= 10)
			n = n - 10;
		if (n >= 5)
			n = n - 5;
		if (n >= 1)
			n = n - 1;
	}

	/* Print the result of the multiplication */
	printf("%d\n", n);

	return (0);
}
