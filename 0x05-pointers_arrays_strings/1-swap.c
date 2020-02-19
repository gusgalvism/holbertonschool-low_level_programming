#include "holberton.h"

/**
 * swap - swaps the values
 *@a: int type
 *@b: int type
 *
 * Return: swaped the value
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

