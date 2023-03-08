#include "main.h"

/**
 * factorial - return the factorial of a number
 * @n: the number
 * Return: -1 if the number is negative for error
 * otherwise the factorial of the number
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
