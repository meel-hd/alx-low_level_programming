#include "main.h"

/**
 * _strchr - find a char in a string
 * @s: the string to search in
 * @c: the char to search for
 * Return: pointer to the first occurence
 * or NULL if not found
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	if (s == 0)
	{
		return (0);
	}
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		i++;
	}

	return (0);
}
