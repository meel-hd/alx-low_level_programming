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
	int charZ = 90;
	int charA = 65;

	while (a < z + 1)
	{
		putchar(a);
		a++;
	}
	while (charA < charZ + 1)
	{
		putchar(charA);
		charA++;
	}
	putchar('\n');

	return (0);
}
