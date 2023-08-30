#include "main.h"
#include <stdio.h>

/**
 * _sqrt_twoinp - Finds the square root of a number using recursion.
 * @n: The number whose square root is to be calculated.
 * @a: The current guess for the square root.
 *
 * Return: The square root if found, or -1 if not.
 */
int _sqrt_twoinp(int n, int a)
{
	if (a * a == n)
		return a;
	if (a * a > n)
		return _sqrt_twoinp(n, a + 1);
	else
		return -1;
}

/**
 * _sqrt_recursion - Calculates the square root of a number using recursion.
 * @n: The input number.
 *
 * Return: The square root of the number.
 */
int _sqrt_recursion(int n)
{
	return _sqrt_twoinp(n, 1);
}
