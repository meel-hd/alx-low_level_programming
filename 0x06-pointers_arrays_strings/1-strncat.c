#include "main.h"

/**
 * _strncat - concat two strings
 * @src: source
 * @dest: destination
 * @n: chars from src to copy
 * Return: result
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int i = 0;

	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	while (i < n && src[i] != '\0')
	{
		dest[dest_len] = src[i];
		i++;
		dest_len++;
	}

	return (dest);
}
