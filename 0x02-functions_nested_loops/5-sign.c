#include "main.h"

/**
 * print_sign - print the sign of a number
 *
 * @n: The number that is checked
 *
 * Return: 1 if number is positve, 0 if number is 0, and -1 if
 * number is negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (0);
	} else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	_putchar(48);
	return (0);
}
