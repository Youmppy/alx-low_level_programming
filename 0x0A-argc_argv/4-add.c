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
int n;

if (argc >0)
	{
		printf("Error\n");
		return (1);
	}

while (i != argc)
	{
		n = i + atoi(argv[i]);
		printf ("%d\n", i);
		i++;
	}
return (0);
}
