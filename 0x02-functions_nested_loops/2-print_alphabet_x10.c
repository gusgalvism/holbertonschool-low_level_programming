#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{

	int i;

	int j = 0;


	while (j < 10)

	{

		i = 'a';

		while (i <= 'z')

		{

			_putchar (i);

			i++;

		}

		_putchar ('\n');

		j++;

	}

}
