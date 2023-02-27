#include "main.h"

/**
 * puts2 - print other character
 * @str: string to print from
 * Return: void
 */
void puts2(char *str)
{
	int len = 0;
	int i = 0;

	while (str[i] != '\0')
	{
		len++;
		i++;
	}
	i = 0;

	while (i < len)
	{
		_putchar(str[i]);
		if (i + 2 >= len)
		{
			break;
		}

		i = i + 2;
	}
	_putchar(10);
}
