#include "main.h"
#include <stdio.h>

/**
 * main - prints name
 * @argv: arg value
 * @argc: arg count
 * Return: 0 true 1 faulse
 */

int main(int argc, char *argv[])
{
	int i;

	if (argc == 3)
	{
		i = atoi(argv[1]) * atit(argv[2]);
		printf("%d\n", i);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}