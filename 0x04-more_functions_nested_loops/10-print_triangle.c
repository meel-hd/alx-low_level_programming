#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 * Return: void
 */
void print_triangle(int size)
{
	int j = 0;

	while (j < size)
	{
		int i = 0;
		int m = 0;

		while (i < size - j - 1)
		{
			_putchar(32);
			i++;
		}
		while (m < size - i)
		{
			_putchar(35);
			m++;
		}
		_putchar(10);
		j++;
	}
	if (size <= 0)
	{
		_putchar(10);
	}
}
