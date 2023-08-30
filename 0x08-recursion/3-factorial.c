#include "main.h"
#include <unistd.h>

/**
 * factorial - Calculates the factorial of a number using recursion.
 * @n: The input number.
 *
 * Return: The factorial of the number.
 *
 * Description: This function recursively calculates the factorial of the input number.
 */
int factorial(int n)
{
	int f = 0;

	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);
	else
	{
		return (n * factorial(n - 1));
	}
}
