#include "main.h"

/**
 * _strcpy - copy a string
 * @dest: destination
 * @src: source string
 * Return: destination pointer
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (1)
	{
		dest[i] = src[i];
		if (src[i] == '\0')
		{
			break;
		}
		i++;
	}

	return (dest);
}
