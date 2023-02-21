#include "main.h"

/**
 * main - Entry
 *
 * Return: 0 if successfull
 */
int main(void)
{
	char string[9] = "_putchar";

	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(string[i]);
	}
	_puthcar("\n");
	return (0);
}
