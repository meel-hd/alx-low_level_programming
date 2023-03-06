#include "main.h"

/**
 * _strpbrk - search a string for a set of bytes
 * @s: string to search
 * @accept: what to search for
 * Return: result pointer
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}

	return (0);
}
