#include "holberton.h"

/**
 * print_sign - check the code for Holberton School students.
 * @n: parameter
 * Return: Always 0.
 */

int print_sign(int n)
{
	int n = 0;

	if (n > '0')
	{
		_putchar ('+')
			return (1);
	}

	else if (n == '0')
	{
		_putchar ('0')
			return (0);
	}

	else
	{
		_putchar ('-')
			return (-1);
	}
}

