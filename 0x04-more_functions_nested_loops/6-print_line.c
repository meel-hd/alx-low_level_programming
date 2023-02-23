#include "main.h"

/**
 * print_line - prints a straight line
 * @n: lenght of line by _
 * Return: void
 */
void print_line(int n)
{
	int underscore = 95;
	int i = 0;

	while (i < n)
	{
		_putchar(underscore);
		i++;
	}
	_putchar(10);
}
