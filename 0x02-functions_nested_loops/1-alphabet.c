#include "main.h"

/**
 * print_alphabet - Print all alphabet in lowercase
 *
 * Return: void
 */
void print_alphabet(void)
{
	int char_a = 97;
	int char_z = 122;

	while (char_a <= char_z)
	{
		_putchar(char_a);
		char_a++;
	}
	_putchar(10);
}
