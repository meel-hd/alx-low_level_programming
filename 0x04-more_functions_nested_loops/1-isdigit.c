#include "main.h"

/**
 * _isdigit - check for a digit from 0 to 9
 * @c: character to check for digit
 * Return: 1 if digit 0 otherwise
 */
int _isdigit(int c)
{
	int zero = 48;
	int nine = 57;

	if (c <= nine && c >= zero)
	{
		return (1);
	}

	return (0);
}
