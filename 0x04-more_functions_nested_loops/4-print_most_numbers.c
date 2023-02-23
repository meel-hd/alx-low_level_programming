#include "main.h"

/**
 * print_most_numbers - print numbers from 0 t 9
 * except 2 and 4
 * Return: void
 */
void print_most_numbers(void)
{
	int zero = 48;
	int nine = 57;
	int two = 50;
	int four = 52;

	while (zero <= nine)
	{
		if (zero != two && zero != four)
		{
			_putchar(zero);
		}
		zero++;
	}
	_putchar(10);
}
