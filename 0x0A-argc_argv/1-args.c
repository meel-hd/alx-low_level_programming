#include <stdio.h>

/**
 * main - Entry point
 * @argc: arguments count
 * @argv: cmd line args
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
