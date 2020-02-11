# include "holberton.h"
#include <stdio.h>

/**
 * print_below_98 - check for numbers below 98
 * @a: int type
 *
 *
 * Return: return all values including 98
 */

void print_below_98(int a)
{
	int c;

	for (c = a; c <= 98; c++)
	{
		if (c != 98)
			printf("%d, ", c);
		else
			printf("%d\n", c);
	}
}

