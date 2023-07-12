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
int i = 1;
int n = 0;

if (argc == 1)
{
printf("Error\n");
return (1);
}

while (i < argc)
{
	int j = 0;

	while (argv[i][j] != '\0')
	{
		if (argv[i][j] < '0' || argv[i][j] > '9')
		{
			printf("Error\n");
			return (1);
		}
		j++;
	}
	n = n + atoi(argv[i]);
	i++;
}
printf("%d\n", n);
return (0);
}
