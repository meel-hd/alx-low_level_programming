#include <stdio.h>

/**
 * main - the fizz buzz
 * Return: 0
 */
int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
			i++;
			continue;
		}
		else if ( i % 3 == 0)
		{
			printf("Fizz ");
			i++;
			continue;
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
			i++;
			continue;
		}
		else
		{
			printf("%d ", i);
			i++;
		}
	}
	printf("\n");

	return (0);
}
