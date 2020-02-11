#include "holberton.h"

/**
 * _abs - check the code for Holberton School students.
 * @a: parameter
 * Return: Always 0.
 */

int _abs(int a)
{
	if (a < 0)
		return (a * -1);
	else
		return (a);
}

