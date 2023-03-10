#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry
 * @argc: args count
 * @argv: args array
 * Return: 0 if success 1 if args are not valid
 */
int main(int argc, char *argv[])
{
	int result = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	result = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", result);
	return (0);
}
