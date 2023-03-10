#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_all_digits - check if string is a digit
 * @str: string to check
 * Return: 0 if not, 1 if string is digit
 */
int is_all_digits(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (!isdigit(str[i]))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
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
		if (!is_all_digits(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		result += atoi(argv[i]);
	}

	printf("%d\n", result);
	return (0);
}
