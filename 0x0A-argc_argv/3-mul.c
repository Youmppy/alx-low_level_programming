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
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
