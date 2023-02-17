#include <stdio.h>

/**
 * main - Entry
 *
 * Return: 0 is success
 */
int main(void)
{
	int a = 97;
	int z = 122;

	while (z > a - 1)
	{
		putchar(z);
		z--;
	}
	putchar('\n');

	return (0);
}
