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
	int forbidden_e = 101;
	int forbidden_q = 113;

	while (a < z + 1)
	{
		if (a != forbidden_e && a != forbidden_q)
		{
			putchar(a);
		}
		a++;
	}
	putchar('\n');

	return (0);
}
