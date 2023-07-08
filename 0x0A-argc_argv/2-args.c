#include "main.h"
#include <stdio.h>

/**
 * main - prints name
 * @argv: arg value
 * @argc: arg count
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i = argc;

	while (i > 0)
	{
		printf("%s\n", argv[i]);
		i--;
	}
	
	return (0);
}

