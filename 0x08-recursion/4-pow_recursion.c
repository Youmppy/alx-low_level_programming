#include "main.h"
#include <unistd.h>

/**
 * _pow_recursion - Calculates the power of a number using recursion.
 * @x: The base number.
 * @y: The exponent.
 *
 * Return: The result of x raised to the power of y.
 *
 * Description: recursively calculates x raised to the power of y.
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);
	if (y && x)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	return (-1);
}
