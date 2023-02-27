#include "main.h"

/**
 * _strlen - lenghth of a string
 * @s: the string to check
 * Return: length of the string
 */
int _strlen(char *s)
{
	int len = 0;
	int i = 0;

	while (s[i] != '\0')
	{
		len++;
		i++;
	}

	return (len);
}
