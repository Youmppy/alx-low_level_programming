#include "main.h"

/**
 * helpc - function that helps with the procedure
 * @n: int
 * Return: Always 0.
 */
int helpc(int n, int i)
{
	if (n % i ==0 && i == n)
	{
		return (1);
	}
	if (n % i ==0 && i != n)
	{
		return(0);
	}
	if(i>n)
	{
		return(0);
	}
	if(n % i !=0) 
	{
		return(helpc(n,i+1));
	}
}

/**
 * is_prime_number - function that helps checks if prime
 * @n: int
 * Return: Always 0.
 */

int is_prime_number(int n)
{
	return (helpc(n,2));
}
