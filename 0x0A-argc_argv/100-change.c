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
Int n =  atoi(argv[1]);
Int c = 0;

While(n != 0)
{
if( n >= 25)
{
	n= n - 25;
	c++;
}
if( n >= 2)
{
	n= n - 25;
	c++;
}
if( n >= 5)
{
	n= n - 5;
	c++;
}
if( n >= 10)
{
	n= n - 10;
	c++;
}
if( n >= 1)
{
	n= n - 1;
	c++
}
}
printf(“%d”,c0;
}
