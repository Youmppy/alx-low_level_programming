#include "main.h"

/**
 * factorial - function that prints factorial a function
 * @n: int
 * Return: Always 0
 */

int factorial(int n)
{
if (n > 0)
{
return (n * factorial(n - 1));
}
else if (n == 0)
{
return (1);
}
else  if (n < 0)
{
return (-1);
}
}
