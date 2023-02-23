#include "main.h"

/**
 * print_numbers - print number from 0 t 9
 * Return: void
 */
void print_numbers(void)
{
	int zero = 48;
	int nine = 57;

	while (zero <= nine)
	{
		_putchar(zero);
		zero++;
	}
	_putchar(10);
}
