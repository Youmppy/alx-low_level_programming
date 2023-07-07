#include "main.h"

/**
 * help - a function that checks sqrt
 * @n: int
 * @i: int
 * Return: Always 0.
 */
int help(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	if (i < n || i == n)
	{
		return (help(n, i + 1));
	}
	else
	{
		return (-1);
	}
}

/**
 * _sqrt_recursion - a function that checks sqrt
 * @n: int
 * Return: Always 0.
 */

int _sqrt_recursion(int n)
{
int i = 1;

help(n, i);
}
