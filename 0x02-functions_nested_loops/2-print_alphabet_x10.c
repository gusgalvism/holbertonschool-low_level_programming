#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{

	char c;

	int d = 0;


	while (d < 10)

	{

		c = 'a';

		while (c <= 'z')

		{

			putchar (c);

			c++;

		}

		putchar ('\n');

		d++;

	}

}
