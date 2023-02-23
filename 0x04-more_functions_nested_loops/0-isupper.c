#include "main.h"

/**
 * _isupper - check for uppercase character
 * @c: character for the checking
 * Return: 1 if the character is  uppercase
 * 0 otherwise
 */
int _isupper(int c)
{
	int upper_z = 90;

	if (c <= upper_z)
	{
		return (1);
	}

	return (0);
}
