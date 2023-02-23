#include "main.h"

/**
 * more_numbers - print numbers to 14
 * Return: void
 */
void more_numbers(void)
{
	int zero;
	int i;
	int nine = 57;

	for (i = 0; i < 10; i++)
	{
		int one = 49;

		zero = 48;
		while (zero <= nine + 5)
		{
			if (zero > nine)
			{
				_putchar(one);
			}
			_putchar(zero <= nine ? zero : zero - 10);
			zero++;
		}

		_putchar(10);
	}
}
