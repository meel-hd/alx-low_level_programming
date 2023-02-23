#include "main.h"

/**
 * print_square - prints a square of hashes
 * @size: size of the square
 * Return: void
 */
void print_square(int size)
{
	int i = 0;

	while (i < size)
	{
		int j = 0;

		while (j < size)
		{
			_putchar(35);
			j++;
		}
		_putchar(10);
		i++;
	}
}
