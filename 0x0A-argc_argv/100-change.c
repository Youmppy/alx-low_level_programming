#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints how many coins are needed for change
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int n, c = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("0\n");
		return (0);
	}

	while (n > 0)
	{
		if (n >= 25)
			n -= 25;
		else if (n >= 10)
			n -= 10;
		else if (n >= 5)
			n -= 5;
		else if (n >= 2)
			n -= 2;
		else if (n >= 1)
			n -= 1;

		c++;
	}

	printf("%d\n", c);
	return (0);
}
