#include "main.h"
#include <stdio.h>

/**
 * _prime - Checks if a number is prime using recursion.
 * @n: The number to be checked.
 * @v: The divisor to check against.
 *
 * Return: 1 if prime, 0 if not prime.
 */
int _prime(int n, int v)
{
	if (n == v)
		return (1);
	if (n % v == 0)
		return (0);

	return (_prime(n, v + 1));
}

/**
 * is_prime_number - Checks if a number is prime.
 * @n: The number to be checked.
 *
 * Return: 1 if prime, 0 if not prime.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (_prime(n, 2));
}
