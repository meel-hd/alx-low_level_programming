#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination
 * @src: source
 * @n: number of chars from src
 * Return: pointer to result
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int dest_len = 0;

	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	while (i < n && i < dest_len && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
