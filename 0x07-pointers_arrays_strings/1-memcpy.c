#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destination
 * @src: the source memory
 * @n: number of bytes to copy from src
 * Return: pointer to the result
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
