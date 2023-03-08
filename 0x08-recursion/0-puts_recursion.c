#include "main.h"

/**
 * _puts_recursion - print a string
 * @s: the string to print
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (s[0] == '\0')
	{
		_putchar(10);
		return;
	}

	_putchar(s[0]);
	_puts_recursion((s + 1));
}
