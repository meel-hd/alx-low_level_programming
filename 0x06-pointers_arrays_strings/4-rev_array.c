#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverses an array
 * @a: the array
 * @n: number of elements in array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i = 0;

	while (i <= n / 2)
	{
		int temp = a[i];
		a[i] = a[n - i];
		a[n - i] = temp;
		i++;
	}
}
