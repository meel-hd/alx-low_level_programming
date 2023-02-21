#include "main.h"

/**
 * main - Entry
 *
 * Return: 0 if successfull
 */
int main(void)
{
	char string[10] = "_putchar\n";

	int i;

	for (i = 0; i <= 10; i++)
	{
		_putchar(string[i]);
	}
	return (0);
}
