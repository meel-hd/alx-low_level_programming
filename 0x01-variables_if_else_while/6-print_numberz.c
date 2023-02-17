#include <stdio.h>

/**
 * main - Entry
 *
 * Return: 0 if success
 */
int main(void)
{
	int zero = 48;
	int nine = 57;

	while (zero < nine + 1)
	{
		putchar(zero);
		zero++;
	}
	putchar('\n');

	return (0);
}
