#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string to print
 * Return: void
 */
void print_rev(char *s)
{
	int len = 0;
	int i = 0;

	while (s[i] != '\0')
	{
		len++;
		i++;
	}

	i = 0;
	while (len > 0)
	{
		_putchar(s[len - 1]);
		len--;
	}
	_putchar(10);
}
