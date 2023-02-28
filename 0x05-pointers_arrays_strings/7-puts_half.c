#include "main.h"

/**
 * puts_half - print half string
 * @str: string
 * Return: void
 */
void puts_half(char *str)
{
	int len = 0;
	int i = 0;
	int print_last;
	int second_half;
	int n;

	while (str[i] != '\0')
	{
		len++;
		i++;
	}
	i = 0;

	print_last = len % 2;
	second_half = len / 2;

	if (!print_last)
	{
		while (second_half < len)
		{
			_putchar(str[second_half]);
			second_half++;
		}
	} else
	{
		n = (len - 1) / 2;

		i = len - n;
		while (i < len)
		{
			_putchar(str[i]);
			i++;
		}
	}
	_putchar(10);
}
