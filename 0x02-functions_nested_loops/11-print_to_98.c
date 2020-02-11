#include <stdio.h>
#include "holberton.h"
/**
 * print_to_98 - check the code for Holberton School students.
 * @n: char to check
 * Return: Always 0.
 */
void print_to_98(int n)
{
	int a;

	if (n <= 98)
	{
		for (a = n; a <= 98; a++)
		{
			if (a < 0)
			{
				printf("%d", a);
			}
			else
			{
				printf("%d", a);
			}
			if (x != 98)
			{
				printf(", ");
			}
		}
		printf("\n");
	} /* if n < 98 close */
	else
	{
		for (a = n; a >= 98; a--)
		{
			printf("%d", a);
			if (a != 98)
			{
				printf(", ");
			}
		}
		printf("\n");
	}
}
