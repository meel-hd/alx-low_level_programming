#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry
 * @argc: args count
 * @argv: args array
 * Return: 0 if success 1 if args are not valid
 */
int main(int argc, char *argv[])
{
	int result = 0;
	int i;

	for (i = 1; i < argc; i++)
	{
		if (isdigit(argv[i][0]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		result += atoi(argv[i]);
	}

	printf("%d\n", result);
	return (0);
}
