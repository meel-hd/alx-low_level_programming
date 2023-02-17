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

	while (zero <= nine)
	{
		for (int i = 48; i <= nine; i++)
		{
			putchar(zero);
			putchar(i);
			if (zero != nine || i != nine)
			{
				putchar(',');
				putchar(' ');
			}
		}
		zero++;
	}
	putchar('\n');

	return (0);
}
