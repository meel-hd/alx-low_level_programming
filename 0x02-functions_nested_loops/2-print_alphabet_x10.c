#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int char_a;
	int char_z;
	int i;

	for (i = 0; i < 10; i++)
	{
		char_a = 97;
		char_z = 122;
		while(char_a <= char_z)
		{
			_putchar(char_a);
			char_a++;
		}
		_putchar(10);
	}
}
