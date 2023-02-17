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
	int a = 97;
	int f = 102;

	while (zero <= nine)
	{
		putchar(zero);
		zero++;
	}
	while (a <= f)
	{
		putchar(a);
		a++;
	}
	putchar('\n');

	return (0);
}
