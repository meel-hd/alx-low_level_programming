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

	while (a < z + 1)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
