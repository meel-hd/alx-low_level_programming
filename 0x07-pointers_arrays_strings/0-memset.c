#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: string memory to fill
 * @b: the constant byte
 * @n: how many bytes to fill
 * Return: result string pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
