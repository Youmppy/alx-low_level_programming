#include "main.h"
#include <stdio.h>
#include  <stdlib.h>

/**
 * main - prints int 1 + int 2
 * @argv: arg value
 * @argc: arg count
 * Return: 0 true 1 false
 */

int main(int argc, char *argv[])
{
int i = argc;
int n =  atoi(argv[1]);
int c = 0;

while(n != 0)
{
	else if( n >= 25)
	{
		n= n - 25;
		c++;
	}
	else if( n >= 2)
	{
		n= n - 25;
		c++;
	}
	else if (n >= 5)
	{
		n= n - 5;
		c++;
	}
	else if (n >= 10)
	{
		n= n - 10;
		c++;
	}
	else if (n >= 1)
	{
		n= n - 1;
		c++
	}
}
printf("%d\n",c);
return (0);
}
