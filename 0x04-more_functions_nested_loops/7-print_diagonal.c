#include "main.h"

/**
 * print_diagonal - print diagonal line in terminal
 * @n: number of time \ should be printed
 * Return: void
 */
void print_diagonal(int n)
{
	int i = 0;
	int j = 0;

	while (i < n)
	{
		int m = 0;

		while (m < j)
		{
			_putchar(32);
			m++;
		}
		j++;
		_putchar(92);
		_putchar(10);
		i++;
	}
	if (n <= 0)
	{
		_putchar(10);
	}
}
