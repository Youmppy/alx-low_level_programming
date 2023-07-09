#include "main.h"
#include <stdio.h>
#include  <stdlib.h>

/**
 * main - prints int 1 + int 2
 * @argv: arg value
 * @argc: arg count
 * Return: 0 true 1 faulse
 */

int main(int argc, char *argv[])
{
	int i;

	if (argc == 3)
	{
		i = atoi(argv[1]) + atoi(argv[2]);
		printf("%d\n", i);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
