#include "main.h"

/**
 * _pow_recursion - function that prints number to the power
 * @x: int
 * @y: int
 * Return: Always 0
 */

int _pow_recursion(int x, int y)
{
if (y > 0)
{
return (x * _pow_recursion(x, y - 1));
}
if (y == 0)
{
return (1);
}
if (y < 0)
{
return (-1);
}
}
