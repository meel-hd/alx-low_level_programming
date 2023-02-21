#include "main.h"

/**
 * _islower - check if character is lowercase
 *
 * @c: character to check
 *
 * Return: 1 if @c is lowercase, 0 otherwise
 */
int _islower(int c)
{
	int upper_z = 90;

	if (c > upper_z)
	{
		return (1);
	}

	return (0);
}
