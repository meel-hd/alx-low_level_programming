#include "main.h"

/**
 * _isalpha - check if char is alpah
 *
 * @c: character for the check
 * Return: 1 if @c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	int islower = c > 96 && c < 122;
	int isupper  = c > 64 && c < 133;

	if (islower || isupper)
	{
		return (1);
	}

	return (0);
}
